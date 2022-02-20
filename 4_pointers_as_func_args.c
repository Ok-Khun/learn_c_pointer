#include<stdio.h>

void increment(int *p)
{
    *p = *p + 1;
}

int main()
{
    // Pointer as function argument
    int a = 10;
    // int* p = &a;
    // increment(p);
    // or
    increment(&a);
    
    printf("%i \n", a);
}