#include<stdio.h>

int main()
{
    int i, j, num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                break;
            }
            
        }
        
    }
    
    return 0;
}