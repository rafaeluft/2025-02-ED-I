#include "TLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no {
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
};

TNo* TNo_createNfill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo!=NULL){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}

TLinkedList* TLinkedList_create(){
    TLinkedList* nova = malloc(sizeof(TLinkedList));
    if(nova!=NULL){
        nova->inicio = NULL;
    }
    return nova;
}

bool TLinkedList_insert_end(TLinkedList* lista, int info){
    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    if(lista->inicio == NULL){
        lista->inicio = novo;
    }else{
        TNo* aux = lista->inicio;
        while(aux->prox != NULL)
            aux = aux->prox;
        //Aux agora eh o ultimo no da lista
        aux->prox = novo;
    }
    return true;
}
bool TLinkedList_insert_begin(TLinkedList* lista, int info){
    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    if(lista->inicio != NULL)
        novo->prox = lista->inicio;
    lista->inicio = novo;
    return true;
}

void TLinkedList_print(TLinkedList* lista){
    if(lista!=NULL){
        TNo* aux = lista->inicio;
        while(aux!=NULL){
            printf("%p:[info: %d, prox: %p]->\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }
    }
}
//Implementação dos Exercícios

/**
 * Exercício 1: Concatentar duas listas sem usar funções já existentes.
 * @param TLinkedList* Ponteiro para a primeira lista
 * @param TLinkedList* Ponteiro para a segunda lista a ser concatenada
 * @return TLinkedList* Ponteiro para a lista resultante.
 */
TLinkedList* TLinkedList_concatenate_pure(TLinkedList* L1, TLinkedList* L2){
    //Criar a lista de retorno
    TLinkedList* L3 = calloc(1, sizeof(TLinkedList));

    //Navegar pela lista 1, inserindo os elementos na lista resultante
    TNo* aux = L1->inicio;
    while(aux){
        TNo* novo = calloc(1, sizeof(TNo));
        if(novo == NULL) 
            break;
        novo->info = aux->info;
        //Inserir o novo no na lista L1
        if(L3->inicio == NULL){
           L3->inicio = novo;
        }else{
            TNo* aux2 = L3->inicio;
            while(aux2->prox != NULL)
                aux2 = aux2->prox;
            //Aux agora eh o ultimo no da lista
            aux2->prox = novo;
        }
        aux = aux->prox;
    }
    //Navegar pela lista 2, inserindo os elementos na lista resultante
    aux = L2->inicio;
    while(aux){
        TNo* novo = calloc(1, sizeof(TNo));
        if(novo == NULL) 
            break;
        novo->info = aux->info;
        //Inserir o novo no na lista L1
        if(L3->inicio == NULL){
           L3->inicio = novo;
        }else{
            TNo* aux2 = L3->inicio;
            while(aux2->prox != NULL)
                aux2 = aux2->prox;
            //Aux agora eh o ultimo no da lista
            aux2->prox = novo;
        }
        aux = aux->prox;
    }
    return L3;
}