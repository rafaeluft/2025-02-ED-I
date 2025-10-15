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
            printf("[%d]->", aux->info);
            aux = aux->prox;
        }
        putchar('\n');
    }
}
bool TLinkedList_try_to_delete(TLinkedList* lista, int info){
    if(lista!=NULL){
        if(lista->inicio != NULL){
            //Quem eu quero deletar é o inicio da lista?
            if(lista->inicio->info == info){
                //Deletar o nó do início
                TNo* temp = lista->inicio;
                //Movo o início para o próximo
                lista->inicio = lista->inicio->prox;
                //deleto o temp
                free(temp);
                return true;
            }else{
                //Devemos procurar o elemento a ser deletado
                TNo* y = lista->inicio; //nó anterior ao elemento a ser deletado
                TNo* temp = y->prox;
                while(temp!= NULL && temp->info != info){
                    y = temp;
                    temp=temp->prox;
                }
                if(temp != NULL){
                    //Encontrei um nó que a info é igual a que eu estou buscando
                    y->prox = temp->prox;
                    free(temp);
                    return true;
                }
            }
        }
    }
    return false;
}
void TLinkedList_free(TLinkedList* lista){
    if(lista!=NULL){
        TNo* aux;
        while(lista->inicio != NULL){
            aux = lista->inicio;
            lista->inicio = aux->prox;
            free(aux);
        }
        free(lista);
    }    
}