#include "Quick.h"

void swap(int *a, int *b){
    int temp = *a; 
    *a = *b;
    *b = temp;
}
int partition(int* A, int p, int r){
    int x = A[r];
    int i = p-1;
    for (int j=p; j<r; j++)
    {
        if(A[j] <= x){
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i+1], &A[r]);
    return i+1;
}
void Quicksort(int* A, int p, int r){
    if(p<r){
        int q = partition(A, p, r);
        Quicksort(A, p, q-1);
        Quicksort(A, q+1, r);
    }
}