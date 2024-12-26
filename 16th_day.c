#include<stdio.h>
int sum(int a, int b){
    return a + b;
}

void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

int takenumber(){
    int i;
    printf("Enetr the number: ");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a,b);
    c = takenumber();
    printf("The number entered is %d \n", c);
    // printstar(7);
    // printf("The sum is  %d \n",c);
    return 0;

}
