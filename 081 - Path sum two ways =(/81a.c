#include <stdio.h>

int i,j,sum=0;
int num[5][5] =
{
    {131,673,234,103,18},
    {201,96,342,965,150},
    {630,803,746,422,111},
    {537,699,497,121,956},
    {805,732,524,37,331}
};

main()
{

    int gridSize = 5;
    //calculate the solution for bottom and right
    for (i = gridSize - 2; i >= 0; i--)
    {
        num[gridSize - 1][i] += num[gridSize - 1][i+1];
        num[i][gridSize - 1] += num[i+1][gridSize - 1];
    }

    for (i = gridSize - 2; i >= 0; i--)
    {
        for (j = gridSize - 2; j >= 0; j--)
        {
            if(num[i + 1][j]<num[i][j + 1])
                num[i][j] += num[i + 1][j];
            else
                num[i][j + 1];
        }
    }

    printf("\nTotal Sum = %d", num[0][0]);

}
