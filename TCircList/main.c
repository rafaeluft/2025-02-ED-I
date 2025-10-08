#include "TCircList.h"
#include <stdio.h>
int main(){
    TCircList* lista = TCircList_create();
    int V[] = {1, 2, 3};
    for(int i=0; i<3; i++)
        if(!TCircList_insert_begin(lista, V[i]))
            printf("Erro ao inserir o elemento V[%i]=%i\n", i, V[i]);
    TCircList_print(lista);
    //TCircList_try_to_delete(lista, 1);
    //TCircList_try_to_delete(lista, 3);
    //TCircList_print(lista);//Sobra apenas o nó 2
    //TCircList_free(lista);
    return 0;
}