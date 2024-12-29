#include <stdio.h>
int main() {
    printf("Lets learn about pointers\n");
    int a=76;
    int* ptr = &a;
    printf("The value of pointr to a is %p\n",&ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The value of a is %d\n", a);

    return 0;
}