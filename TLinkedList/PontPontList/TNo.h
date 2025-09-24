#ifndef TNO_H
#define TNO_H
#include <stdbool.h>

typedef struct _no TNo;

bool insert(TNo** inicio, int info);
void print(TNo* inicio);

#endif