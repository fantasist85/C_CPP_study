#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 1 // test
#define MAX_COL 5 // test

int Array[MAX_ROW][MAX_COL];

void print_array();

void array_move(char dir)
{
    char row, col;
    //char row_buffer, col_buffer;

    if (dir == 'r') {
        for (row = 0; row < MAX_ROW; row++) {
            for (col = MAX_COL - 1; col > 0; col--) { // change col

                // Sum
                for (char i = col - 1; i >= 0; i--) {

                    // need to ignore when it's not empty
                    if ((Array[row][col] != Array[row][i]) && (Array[row][col] != 0) && (Array[row][i] != 0)) {
                        break;
                    }

                    else if ((Array[row][col] == Array[row][i]) && (Array[row][col] != 0)) { // sum on multiply of 2

                        Array[row][col] = Array[row][col] + Array[row][i];
                        Array[row][i] = 0;
                        break;
                    }
                }

                // Remove zero
                if (Array[row][col] == 0) {
                    // End of row loop : do nothing
                    if (col == 0) {
                    }
                    // Move valid number
                    else {
                        for (char i = col - 1; i >= 0; i--) {
                            if (Array[row][i] != 0) {
                                Array[row][col] = Array[row][i];
                                Array[row][i] = 0;
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
            printf("%d ", Array[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

void main()
{
    char scan_dir = 'r';
    // char new_num;
    Array[0][0] = rand() % 3;

    while (1) {
        // scanf("%c", &scan_dir);
        array_move(scan_dir);
        Array[0][0] = rand() % 3;
        print_array();
    }
}