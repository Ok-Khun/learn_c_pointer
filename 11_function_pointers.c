#include<stdio.h>
#include<stdlib.h>

int add(int a, int b){
    return a + b;
}

void printHello(){
    printf("Hello \n");
}

int main(){
    // function pointers
    // pointer can point to both data & function
    // application memory [code[text]][static/global][stack][heap]
    // source code => compiler => machine code
    int (*p)(int, int);
    // p = &add;   // p => add
    // int c = (*p)(5,5);
    // or
    p = add;
    int c = p(5,5);
    printf("c = %i \n", c);

    void (*h)();
    h = printHello;
    h();
}

// note
// Function that returns a pointer
// int* add(int, int)
// Function pointer
// int (*add)(int, int)
