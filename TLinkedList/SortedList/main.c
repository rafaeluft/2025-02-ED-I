#include "TSortedList.h"
#include <stdio.h>
int main(){
    TSortedList* lista = TSortedList_create();
    int V[] = {50, 20, 30};
    for(int i=0; i<3; i++)
        if(!TSortedList_insert(lista, V[i]))
            printf("Erro ao inserir o elemento V[%i]=%i\n", i, V[i]);
    TSortedList_print(lista);
    return 0;
}