#include<stdio.h>
#include<stdlib.h>

void A(){
    printf("Hello\n");
}

// this function takes a function pointer as args
void B(void (* ptr)()){
    // call back
    ptr();
}

int main(){
    // function pointers and callbacks
    // B(A);
    // or
    void  (*p)() = A;
    B(p);
}
