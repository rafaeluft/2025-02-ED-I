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
        novo->prox = NULL;
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
    /*if(lista->inicio != NULL)
        novo->prox = lista->inicio;
    lista->inicio = novo;
    */
    return true;
}

void TCircList_print(TCircList* lista){
    if(lista!=NULL){
    }
}
//TODO: Implementar esta função
bool TCircList_try_to_delete(TCircList* lista, int info){

}
//TODO: Implementar esta função 
void TCircList_free(TCircList* lista){
    
}