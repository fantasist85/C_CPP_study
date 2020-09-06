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
        //        for (col = 0; col < MAX_COL; col++) { //test 1st col
        for (row = MAX_ROW - 1; row > 0; row--) {
            // Remove zero
            if (Array[row][col] == 0) {
                // End of row loop : do nothing
                if (row == 0) {
                }
                // Move valid number
                else {
                    for (char i = row; i >= 0; --i) {
                        // printf("%d", i);

                        if (Array[i][col] != 0) {
                            Array[row][col] = Array[i][col];
                            Array[i][col] = 0;
                            printf("i");
                        }
                    }
                }
                print_array();
            }
            // Sum
        }
        //     }    //end test 1st col
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

    while (1) {
        Array[0][0] = rand() % 3;
        scanf("%c", &scan_dir);
        print_array();

        array_move(scan_dir);

        if (scan_dir == 'u') {
            print_array();
        }
    }
}