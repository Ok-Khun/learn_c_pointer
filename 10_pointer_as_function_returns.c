#include<stdio.h>
#include<stdlib.h>

void printHello()
{
    printf("Hello \n");
}

int* add(int* x, int* y)
{
    int* z = (int*)malloc(sizeof(int));
    *z = (*x) + (*y);
    return z;
}

int main()
{
    int a = 10, b = 5;
    int* ptr = add(&a, &b);
    printHello();
    printf("ptr = %i \n", *ptr);
}