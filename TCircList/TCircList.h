#ifndef TCIRC_LIST_H
#define TCIRC_LIST_H
#include <stdbool.h>

typedef struct _list TCircList;

TCircList* TCircList_create();

bool TCircList_insert_begin(TCircList*, int);

bool TCircList_insert_end(TCircList*, int);

void TCircList_print(TCircList*);

/**
 * Tenta encontrar e deletar um nó com a informação é igual ao parâmetro.
 * @param TCircList* ponteiro para a lista
 * @param int inteiro a ser buscado na lista
 * @return bool Informando o sucesso ou fracasso da operação
 */
bool TCircList_try_to_delete(TCircList*, int);

/**
 * Remove todos os nós da lista e apaga o ponteiro da lista
 * @param TCircList* ponteiro para a lista
 */
void TCircList_free(TCircList*);

#endif