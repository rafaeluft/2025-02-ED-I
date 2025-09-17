#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H
#include <stdbool.h>

typedef struct _list TLinkedList;

TLinkedList* TLinkedList_create();

bool TLinkedList_insert_begin(TLinkedList*, int);
bool TLinkedList_insert_end(TLinkedList*, int);

void TLinkedList_print(TLinkedList*);

//Exercícios
/**
 * Exercício 1: Concatentar duas listas sem usar funções já existentes.
 * @param TLinkedList* Ponteiro para a primeira lista
 * @param TLinkedList* Ponteiro para a segunda lista a ser concatenada
 * @return TLinkedList* Ponteiro para a lista resultante.
 */
TLinkedList* TLinkedList_concatenate_pure(TLinkedList*, TLinkedList*);
/**
 * Exercício 1: Concatentar duas listas usando funções existentes.
 * @param TLinkedList* Ponteiro para a primeira lista
 * @param TLinkedList* Ponteiro para a segunda lista a ser concatenada
 * @return TLinkedList* Ponteiro para a lista resultante.
 */
TLinkedList* TLinedList_concatenate(TLinkedList*, TLinkedList*);
#endif