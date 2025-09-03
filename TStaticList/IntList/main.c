#include "TStaticList.h"
#include <stdio.h>

int main(){
    TStaticList* lista_impares = TStaticList_create();
    TStaticList* lista_pares = TStaticList_create();
    //Experimente alterar o valor para além da capacidade da lista
    //Qualquer valor acima de 20 já nao consegue mais inserir.
    for(int i=0; i<20; i++){
        if(i%2 != 0){
            //Vai dar erro aqui até que você faça a codificação correta desta função
            if(!TStaticList_insert_begin(lista_impares, i))
                printf("Erro ao inserir o elemento %d na lista de impares!\n", i);
        }
        else
            if(!TStaticList_insert_end(lista_pares, i))
                printf("Erro ao inserir o elemento %d na lista de pares!\n", i);
    }
    puts("Segue a lista de números pares:");
    TStaticList_print(lista_pares);
    puts("Segue a lista de números ímpares:");
    TStaticList_print(lista_impares);
    return 0;
}