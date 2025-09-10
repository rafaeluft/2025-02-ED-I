#include "TPonto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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

void TPonto_set_y(TPonto* ponto, float y){
    if(ponto!=NULL){
        ponto->y = y;
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

void TPonto_get_y(TPonto* ponto, float* plocal_y){
    if(ponto){
        *plocal_y = ponto->y;
    }
}
float TPonto_distancia(TPonto* p1, TPonto* p2){
    float diff_x = (p1->x - p2->x);
    float diff_y =  (p1->y - p2->y);

    float dist = sqrtf(diff_x*diff_x + diff_y*diff_y);
    return dist;
}