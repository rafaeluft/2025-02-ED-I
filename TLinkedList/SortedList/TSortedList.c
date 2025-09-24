#include "TSortedList.h"
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

TSortedList* TSortedList_create(){
    TSortedList* nova = malloc(sizeof(TSortedList));
    if(nova!=NULL){
        nova->inicio = NULL;
    }
    return nova;
}

bool TSortedList_insert(TSortedList* lista, int info){
    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    //TODO: Fazer a inserção ordenada    
    return true;
}

void TSortedList_print(TSortedList* lista){
    if(lista!=NULL){
        TNo* aux = lista->inicio;
        while(aux!=NULL){
            printf("%p:[info: %d, prox: %p]->\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }
    }
}