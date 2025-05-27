#include <stdio.h>
int main() {
    int x, i, z = 1;
    printf("Enter the number to check for prime: ");
    scanf("%d", &x);
    if (x <= 1) {
        printf("%d is not prime\n", x);
        return 0;
    }
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            printf("%d is not prime\n", x);
            z = 0;
            break;
        }
    }
    if (z) {
        printf("%d is prime\n", x);
    }

    return 0;
}
