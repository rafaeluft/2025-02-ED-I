#include <stdio.h>
#include "Quick.h"


void imprimirArray(int vetor[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main(){
    int vetor[10] = {7, 42, 15, 23, 9, 50, 31, 4, 28, 46};
    imprimirArray(vetor, 10);
    Quicksort(vetor, 0, 9);
    imprimirArray(vetor, 10);
    return 0;
}