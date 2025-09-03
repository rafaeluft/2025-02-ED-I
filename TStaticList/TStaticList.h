#ifndef TSTATIC_LIST_H
#define TSTATIC_LIST_H
#include <stdbool.h>

typedef struct _list TStaticList;
/**
 * Cria instâncias para uma lista de inteiros (inicialmente vazia);
 * @return TStaticList* ponteiro para a lista recém criada.
 */
TStaticList* TStaticList_create();
/**
 * Tenta realizar a inserção de um elemento inteiro no FIM da lista;
 * @param TStaticList* ponteiro para uma lista criada com TStaticList_create()
 * @param int Inteiro para ser inserido na lista
 * @return bool Informa sobre o sucesso da operação
 */
bool TStaticList_insert_end(TStaticList*, int);

/**
 * Tenta realizar a inserção de um elemento inteiro INICIO da lista;
 * @param TStaticList* ponteiro para uma lista criada com TStaticList_create()
 * @param int Inteiro para ser inserido na lista
 * @return bool Informa sobre o sucesso da operação
 */
bool TStaticList_insert_begin(TStaticList*, int);
/**
 * Imprime a lista de inteiros
 * @param TStaticList* ponteiro para uma lista instanciada;
 */
void TStaticList_print(TStaticList*);


#endif