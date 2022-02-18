#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pointers and dynamic memory
    // a typical application memory => [Code][Static/Global][Stack][Heap]
    // Heap is a free store of memory
    // To use dynamic memory in c
    /*
        C:
            malloc  - void* malloc(sizeof(datatype))
            calloc  - void* calloc(num of ele, size of datatype)
            realloc - void* realloc(void* pointer, size of new block)
            free

            Note : malloc initialize value with garbage value
                   calloc initialize value with 0 value

        C++:
            new
            delete


    */

    int a;
    int *p;
    p = (int *)malloc(sizeof(int)); // malloc returns a void pointer i.e type casting is required.
    *p = 10;
    free(p);
    p = (int *)malloc(sizeof(int));
    *p = 20;
    free(p);
    // storing array of 10 int
    // p = (int*)malloc( 10* sizeof(int));

    int n;
    printf("Enter size of array \n");
    scanf("%d", &n);
    printf("\n");
    // allocate memory dynamically
    // int *A = (int*)malloc(n*sizeof(int));
    int *A = (int*)calloc(n,sizeof(int));
    
    for(int i = 0; i < n; i++){
        A[i] = i+1;
    }
    free(A);
    // note we can still access to data
    // A[2] = 10;
    for(int i = 0; i < n; i++){
        printf("%d \n", A[i]);
    }

    // int *B = (int*)realloc(A, 2*n*sizeof(int));
    // int *B = (int*)realloc(null, 2*n*sizeof(int)); same as malloc
}