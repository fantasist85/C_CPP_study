#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 5 // test
#define MAX_COL 5 // test

int Array[MAX_ROW][MAX_COL];

void print_array();

void array_move(char dir)
{
    char row, col;
    char row_buffer, col_buffer;

    if (dir == 'd') {
        for (col = 0; col < MAX_COL; col++) {
            for (row = MAX_ROW - 1; row > 0; row--) { // change row

                // Sum
                for (char i = row; i >= 0; --i) {
                    if (Array[row][col] == Array[i][col]) {
                        Array[row][col] = Array[row][col] + Array[i][col];
                        Array[i][col] = 0;
                    }
                }

                // Remove zero
                if (Array[row][col] == 0) {
                    // End of row loop : do nothing
                    if (row == 0) {
                    }
                    // Move valid number
                    else {
                        for (char i = row; i >= 0; --i) {
                            if (Array[i][col] != 0) {
                                Array[row][col] = Array[i][col];
                                Array[i][col] = 0;
                            }
                        }
                    }
                    // print_array();
                }
            }
        }
    }
}

void print_array()
{
    char row, col;

    for (row = 0; row < MAX_ROW; row++) {
        for (col = 0; col < MAX_COL; col++) {
            printf("%d", Array[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

void main()
{
    char scan_dir;
    // char new_num;

    Array[0][0] = rand() % 3;
    while (1) {
        scanf("%c", &scan_dir);
        array_move(scan_dir);
        Array[0][0] = rand() % 3;
        print_array();
    }
}