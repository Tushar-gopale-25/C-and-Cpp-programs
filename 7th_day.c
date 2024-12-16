#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    
    if (age>=18)
    {
        printf("%d you can vote!");
    }
    else if (age>=10)
    {
        printf("%d your are between 10 to 18 and you can vote for kids");
    }
    else if (age>=3)
    {
        printf("%d your are between 03 to 10 and you can vote for kids");
    }
    else
    {
        printf("%d you cannot vote!");
    }
    return 0;
}