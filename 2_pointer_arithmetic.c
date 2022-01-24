#include <stdio.h>

int main(){
    // Pointer Arithmetic
    int a;
    int *p;
    a = 1025;
    p = &a;

    printf("value of a = %d\n", a);
    printf("value stored in p = %i \n", *p);
    printf("address of a = %p\n", &a);
    printf("address stored in p = %p \n", p);
    printf("address of p = %p \n", &p);

    char *p1;
    p1 = (char*)p;
    printf("value stored in p1 = %i \n", *p1);
    printf("address stored in p1 = %p \n", p1);


}