#include<stdio.h>
void printarray(int* A, int n){
    for (int i = 0; i  < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubbleSort(int* A, int n){
    int temp;
    for (int i = 0; i< n-1; i++) // For numberv of passes
    {
        for (int j = 0; j< n-1-i; j++)
        {
            if(A[j]>A[j+1]){
              temp = A[j];
              A[j] = A[j+1];
              A[j+1] = temp;
            }
        }
    }
}
int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printf("An Sorted Array");
    printf("\n");
    printarray(A, n); // printig the array before sorting 
    bubbleSort(A,n);  //Function to sort the array
    printf("\n");
    printf("An Sorted Array");
    printf("\n");
    printarray(A, n); // printig the array before sorting 
    return 0;
}