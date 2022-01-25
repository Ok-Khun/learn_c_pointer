#include<stdio.h>

int sum_of_arr(int A[], int size){
    // Calculate sum of array
    int sum = 0;
    int i = 0;
    for(i = 0; i <  size; i++){
        sum = *(A+i) + sum;
    }
    return sum;
}

int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A) / sizeof(int);
    int sum = sum_of_arr(A,size);
    printf("%i\n", sum);
}