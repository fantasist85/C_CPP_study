#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 4 // test
#define MAX_COL 4 // test

int Array[MAX_ROW][MAX_COL];

void array_move(char dir)
{
    char row, col;
    char row_buffer, col_buffer;
    if (dir == 'd') {
        for (col = 0; col < MAX_COL; col++) {
            for (row = MAX_ROW - 1; row < 0; row--) {
                // Remove zero
                if (Array[row][col] == 0) {
                    if (row == 0) {
                    }
                    else if (Array[row - 1][col] != 0) {
                        Array[row][col] = Array[row - 1][col];
                        Array[row - 1][col] = 0;
                    }
                }
                // Sum
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
}

void main()
{
    char scan_dir;
    // char new_num;

    while (1) {
        Array[0][0] = rand() % 3;
        scanf("%c", &scan_dir);

        array_move(scan_dir);

        if (scan_dir == 'u') {
            print_array();
        }
    }
}