#include<stdio.h>

int main(){
    int A[] = {1,2,3,4,5};
    printf("%p \n", A);
    printf("%p \n", &A[0]);
    printf("%i \n", A[0]);
    printf("%i \n", *(A));
    printf("%i \n", A[1]);
    printf("%i \n", *(A + 1));
}
