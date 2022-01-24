#include<stdio.h>

int main(){
    int a = 10;
    int* p0;
    int** p1;
    p0 = &a;
    p1 = &p0; 
    printf("%i \n", **p1);
}