#include "TNo.h"
#include <stdio.h>

int main(){
    TNo* inicio = NULL;
    int V[] = {20, 30 , 40};
    for(int i=0; i<3; i++)
        if(!insert(&inicio, V[i]))
            printf("Erro ao inserir V[%d]=%d\n", i, V[i]);
    
    print(inicio);
    return 0;
}