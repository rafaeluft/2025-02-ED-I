#include<stdio.h>

int main(){
    int n, m, temp, i;
    scanf("%d %d", &n, &m);
    printf("Valores lidos: n=%d m%d\n", n, m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &temp);
        printf("Valor lido: %d\n", temp);
    }
    return 0;
}