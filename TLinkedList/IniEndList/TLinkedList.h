#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H
#include <stdbool.h>

typedef struct _list TLinkedList;

TLinkedList* TLinkedList_create();

bool TLinkedList_insert_begin(TLinkedList*, int);
bool TLinkedList_insert_end(TLinkedList*, int);

void TLinkedList_print(TLinkedList*);

/**
 * Tenta encontrar e deletar um nó com a informação é igual ao parâmetro.
 * @param TLinkedList* ponteiro para a lista
 * @param int inteiro a ser buscado na lista
 * @return bool Informando o sucesso ou fracasso da operação
 */
bool TLinkedList_try_to_delete(TLinkedList*, int);

/**
 * Remove todos os nós da lista e apaga o ponteiro da lista
 * @param TLinkedList* ponteiro para a lista
 */
void TLinkedList_free(TLinkedList*);

#endif