#include "TNo.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

TNo* TNo_createNFill(int info){
    TNo* novo = calloc(1, sizeof(TNo));
    if(novo!=NULL)
        novo->info = info;
    return novo;
}
bool insert(TNo** inicio, int info){
    TNo* novo = TNo_createNFill(info);
    if (novo == NULL) return false;
    if(*inicio == NULL)
        *inicio = novo;
    else{
        TNo* aux = *inicio;
        while(aux->prox)
            aux = aux->prox;
        aux->prox = novo;
    }
    return true;
}

void print(TNo* inicio){
    TNo* aux = inicio;
    while(aux){
        printf("[%d]->", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}