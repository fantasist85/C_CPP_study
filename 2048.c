#include <stdio.h>
#include <stdlib.h>

int Array[4][4];

void array_move(char dir)
{
    char row, col;
    if (dir == 'd')
    {
        for (col = 0; col < 4; col++)
        {
            if (Array[3][col] == 0)
            {
            }
            else if (Array[3][col] == 0)
        }
    }
}

void print_array()
{
    char row, col;

    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("%d", Array[row][col]);
        }
        printf("\n");
    }
}

void main()
{
    char scan_dir;
    //char new_num;

    while (1)
    {
        Array[0][0] = rand() % 3;
        scanf("%c", &scan_dir);

        array_move(scan_dir);

        if (scan_dir == 'u')
        {
            print_array();
        }
    }
}