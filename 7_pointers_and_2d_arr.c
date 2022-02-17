#include<stdio.h>

int main(){
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    // int (*p)[3] = arr; 

    // address of arr[0][0]
    printf("%p \n", arr);
    printf("%p \n", &arr[0]);
    // printf("%p \n", p);
    printf("%p \n", *arr);
    printf("\n");

    // address of arr[1][0]
    printf("%p \n", arr[1]);
    printf("%p \n", &arr[1][0]);
    printf("%p \n", arr + 1);
    printf("%p \n", *(arr+1));

    // value arr[0][1]
    printf("%i \n", *(*arr + 1));

    // value arr[0][1]
    printf("%i \n", *(*(arr + 1) + 1));

    /*
    arr[i][j] = *(arr[i] + j) <or> *(*(B+i) + j)
    */
}