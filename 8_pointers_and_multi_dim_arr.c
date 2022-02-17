#include<stdio.h>

void func(int (*A)[2][2]){
} 


int main(){
    // pointers and multi dim arr
    int arr[3][2][2] = {
        {{1,2},{3,4}},
        {{5,6},{7,8}},
        {{9,10},{11,12}}
    };

    int (*p)[2][2] = arr;

    /*
        arr[i][j][k] = *(arr[i][j] + k) 
        = *(*(arr[i] + j) + k) 
        = *(*(*(arr + i ) + j) + k)
        *(arr[0][1] + 1) = arr[0][1][1]
    */

   // passing multi dim arr as function arguments
    func(arr);
}