#include "TStaticList.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX 10
struct _list{
    int qty;//quantidade de elementos atualmente na lista
    int data[MAX];
};

bool TStaticList_is_empty(TStaticList* list){
    return list->qty == 0;
}
bool TStaticList_is_full(TStaticList* list){
    return list->qty == MAX;
}

TStaticList* TStaticList_create(){
//Vamos criar uma lista vazia
    TStaticList* nova = malloc(sizeof(TStaticList));
    if(nova != NULL){
        nova->qty = 0;
    }
    return nova;
}

bool TStaticList_insert_end(TStaticList* lista, int valor){
    if(lista!=NULL && !TStaticList_is_full(lista)){
        lista->data[lista->qty] = valor;
        lista->qty = lista->qty+1;
        return true;
    }
    return false;
}
bool TStaticList_insert_begin(TStaticList* lista, int valor){
    //1. Testar se a lista nao está cheia
    if(lista!=NULL && !TStaticList_is_full(lista)){
    //2. Mover os dados para abrir espaço no índice 0
        for(int j=lista->qty; j>0; j--)
            lista->data[j] = lista->data[j-1];
    //3. Inserir o valor no índice 0
        lista->data[0] = valor;
    //4. Incrementar a quantidade
        lista->qty = lista->qty+1;
        return true;
    }
    return false;
}
void TStaticList_print(TStaticList* lista){
    if(lista){
        if(TStaticList_is_empty(lista))
            puts("Lista vazia!");
        else{
            for(int i=0; i<lista->qty; i++)
                printf("[%d] ", lista->data[i]);
            putchar('\n');
        }
    }   
}

bool TStaticList_try_to_delete(TStaticList* lista, int valor){
    
    //1. Verificar se a lista não está vazia
    if(lista!=NULL && !TStaticList_is_empty(lista)){
        //2. Tentar encontrar o elemento
        for(int i=0; i<lista->qty; i++){
            if(lista->data[i] == valor)//Encontrei!
            {
                //3. Se eu encontrei, movo os dados..
                //i é o índice onde o valor foi encontrado
                for(int j=i; j<lista->qty-1; j++)
                    lista->data[j] = lista->data[j+1];
                //4. Diminuir a quantidade de elementos...
                lista->qty--;
                return true;
            }
        }
        return false; //Nao encontrei ...
    }
    return false;//A lista nao é válida ou é vazia..
}