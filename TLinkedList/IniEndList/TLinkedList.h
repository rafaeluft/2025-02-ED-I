#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H
#include <stdbool.h>

typedef struct _list TLinkedList;

TLinkedList* TLinkedList_create();

bool TLinkedList_insert_begin(TLinkedList*, int);
bool TLinkedList_insert_end(TLinkedList*, int);

void TLinkedList_print(TLinkedList*);

#endif