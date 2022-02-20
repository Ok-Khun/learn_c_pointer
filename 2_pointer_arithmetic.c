#include <stdio.h>

int main(){
    // Pointer Arithmetic
    char c[] = "I love C Programming.";
    char* p = &c[0];
    // address of c[0]
    printf("Address of c[0] = %p \n", p);
    printf("Address of c[0] = %p \n", &c[0]);
    
    printf("\n");
    // c[0]
    printf("c[0] = %c \n", c[0]);
    printf("c[0] = %c \n", *p);
    
    printf("\n");
    // c[2]
    printf("c[0] = %c \n", c[2]);
    printf("c[0] = %c \n", *(p + 2));
}