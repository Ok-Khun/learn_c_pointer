#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *p;
    p = arr;
    // address of array
    printf("%p\n", arr);
    printf("%p\n", p);
    // value of array
    printf("%i\n", arr[0]);
    printf("%i\n", arr[2]);
    printf("%i\n", *p);
    printf("%i\n", *(p+1));
}