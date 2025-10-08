#include "TLinkedList.h"
#include <stdio.h>
int main(){
    TLinkedList* lista = TLinkedList_create();
    int V[] = {1, 2, 3};
    for(int i=0; i<3; i++)
        if(!TLinkedList_insert_end(lista, V[i]))
            printf("Erro ao inserir o elemento V[%i]=%i\n", i, V[i]);
    TLinkedList_print(lista);
    TLinkedList_try_to_delete(lista, 1);
    TLinkedList_try_to_delete(lista, 3);
    TLinkedList_print(lista);//Sobra apenas o nó 2
    TLinkedList_free(lista);
    return 0;
}