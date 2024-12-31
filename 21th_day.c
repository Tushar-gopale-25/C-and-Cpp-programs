#include <stdio.h>
int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b; //1
        a = b-a; //1
    }
    
    return a;
}
int fib_recursive(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}
int main() {
    int number;
    printf("Enter the index to get fiboncate series: \n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approch is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approch is %d\n", number, fib_recursive(number));
    return 0;
}