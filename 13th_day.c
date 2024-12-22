#include<stdio.h>

int main()
{
    int i, age;
        printf("Enter Your age: ");
        scanf("%d", &age);

    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",age);
        if (age>10)
        {
            break;
        }
        
    }
    
    return 0;
}