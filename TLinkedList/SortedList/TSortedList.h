#ifndef TSORTED_LIST_H
#define TSORTED_LIST_H
#include <stdbool.h>

typedef struct _list TSortedList;

TSortedList* TSortedList_create();

bool TSortedList_insert(TSortedList*, int);
void TSortedList_print(TSortedList*);

#endif