#include<stdio.h>
#define MAX 10



int main(){
    //Ler um vetor com 10 numeros
    int V[MAX], i, x;
    for(i=0;i<MAX; i++)
        scanf("%d", &V[i]);
    //Ler um inteiro x 
    scanf("%d", &x);

    //Mostrar apenas os múltiplos de x
    for(i=0;i<MAX; i++)
        if(V[i]%x == 0)
            printf("%d ", V[i]);

    return 0;
}
