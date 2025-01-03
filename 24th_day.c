#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("1");
        }
        printf("\n");
    }        
}

void reverseStarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }        
}


int main() 
{
    int rows;
    printf("How many eows do you want?\n");
    scanf("%d", &rows);
    // starpattern(rows);
    reverseStarpattern(rows);
    return 0;
}