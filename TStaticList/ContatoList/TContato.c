#include "TContato.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _contato{ 
    int id;
    char nome[128];
    char telefone[64];
}TContato;

void TContato_destroy(TContato* contato){
    free(contato);
}
//TODO: Implementar as funções
TContato* TContato_create(char* nome, char* telefone){
    static int ID = 1;
    TContato* novo = malloc(sizeof(TContato));
    if(novo != NULL){
        novo->id = ID;
        strcpy(novo->nome, nome);
        strcpy(novo->telefone, telefone);
        ID++;
    }
    return novo;
}
void TContato_print(TContato* contato){
    if(contato!=NULL){
        printf("ID: %d\nNome: %s\nTelefone: %s\n-------------\n",
            contato->id, contato->nome, contato->telefone);
    }
}
