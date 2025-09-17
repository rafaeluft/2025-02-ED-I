#include "TLinkedList.h"
#include <stdio.h>
int main(){
    TLinkedList* lista1 = TLinkedList_create();
    TLinkedList* lista2 = TLinkedList_create();

    int V[] = {1, 2, 3, 40, 50, 60};
    for(int i=0; i<6; i++)
        if(!TLinkedList_insert_end((i<3)?lista1:lista2, V[i]))
            printf("Erro ao inserir o elemento V[%i]=%i\n", i, V[i]);
    TLinkedList_print(lista1);
    TLinkedList_print(lista2);
    //Teste do Exercício 1
    TLinkedList *lista3 = TLinkedList_concatenate_pure(lista1, lista2);
    TLinkedList_print(lista3);
    return 0;
}