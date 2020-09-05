#include <stdio.h>
#include <stdlib.h>

int Array[4][4];

void print_array()
{
    char i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", Array[i][j]);
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

        if (scan_dir == 'u')
        {
            print_array();
        }
    }
}