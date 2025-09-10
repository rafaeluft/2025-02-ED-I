#ifndef TCONTATO_H
#define TCONTATO_H
//Vamos definir o TAD TContato
typedef struct _contato TContato;
TContato* TContato_create(char*, char*);
void TContato_print(TContato*);
void TContato_destroy(TContato*);
//Se você quiser definir outras funções...

#endif