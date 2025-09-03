#ifndef TCONTATO_H
#define TCONTATO_H

typedef struct {
    int id;
    char nome[128];
    char telefone[64];
}TContato;

TContato* TContato_create(int, char*, char*);
void TContato_print(TContato*);
//Se você quiser definir outras funções...

#endif