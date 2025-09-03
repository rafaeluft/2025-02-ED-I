#include "TStaticList.h"
#include <stdio.h>

int main(){
    TStaticList* lista_impares = TStaticList_create();
    TStaticList* lista_pares = TStaticList_create();
    for(int i=0; i<20; i++){
        if(i%2){
            if(!TStaticList_insert(lista_impares, i))
                printf("Erro ao inserir o elemento %d na lista de impares!\n", i);
        }
        else
            if(!TStaticList_insert(lista_pares, i))
                printf("Erro ao inserir o elemento %d na lista de pares!\n", i);
    }
    puts("Segue a lista de números pares:");
    TStaticList_print(lista_pares);
    puts("Segue a lista de números ímpares:");
    TStaticList_print(lista_impares);
    return 0;
}