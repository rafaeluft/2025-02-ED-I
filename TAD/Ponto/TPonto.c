#include "TPonto.h"
#include <stdlib.h>
#include <stdio.h>

struct _ponto{
    float x,y;
};
TPonto* TPonto_create(float x, float y){
    TPonto* novo = malloc(sizeof(TPonto));
    if(novo){
        novo->x = x;
        novo->y = y;
    }
    return novo;
}
void TPonto_print(TPonto* ponto){
    if(ponto != NULL){
        printf("(%0.2f,%0.2f)\n", ponto->x, ponto->y);
    }
}

void TPonto_set_x(TPonto* ponto, float x){
    if(ponto!=NULL){
        ponto->x = x;
    }
}

void TPonto_delete(TPonto* ponto){
    free(ponto);
}

void TPonto_get_x(TPonto* ponto, float* plocal_x){
    if(ponto){
        *plocal_x = ponto->x;
    }
}