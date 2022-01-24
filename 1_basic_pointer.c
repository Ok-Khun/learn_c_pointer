#include <stdio.h>

int main() {
    int a; // a variable that stores an integer
    int *p; // a pointer variable
    a = 10;
    p = &a; // pointer stores an address of a variable
    printf("%i \n", a); // 10
    printf("%i \n", *p); // 10
    printf("%p \n", &a); // address of a
    printf("%p \n", p); // address of a
    printf("%p \n", &p); // address of p
}