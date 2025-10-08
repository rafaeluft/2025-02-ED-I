#include "TCircList.h"
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
        novo->prox = novo;
    }
    return novo;
}

TCircList* TCircList_create(){
    TCircList* nova = malloc(sizeof(TCircList));
    if(nova!=NULL){
        nova->inicio = NULL;
    }
    return nova;
}

bool TCircList_insert_end(TCircList* lista, int info){
    return false;
    
    /*TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    return true;*/
}
//TODO: Implementar esta função
bool TCircList_insert_begin(TCircList* lista, int info){
    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    if(lista->inicio != NULL) //Ja existem nós na lista (pelo menos 1)
    {
        //Encontrar o último nó
        TNo* aux = lista->inicio;
        while(aux->prox != lista->inicio)
            aux = aux->prox;
        aux->prox = novo;
        novo->prox = lista->inicio;
    }
    lista->inicio = novo;
    return true;
}

void TCircList_print(TCircList* lista){
    if(lista!=NULL && lista->inicio != NULL){
        TNo* aux = lista->inicio;
        do{
            printf("%d->", aux->info);
            aux = aux->prox;
        }while(aux!=lista->inicio);
        putchar('\n');
    }
}
//TODO: Implementar esta função
bool TCircList_try_to_delete(TCircList* lista, int info){
    return false;
}
//TODO: Implementar esta função 
void TCircList_free(TCircList* lista){
    
}