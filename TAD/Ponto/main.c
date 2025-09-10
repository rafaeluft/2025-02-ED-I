#include "TPonto.h"
#include <stdio.h>
int main(){
    TPonto *ponto1 = TPonto_create(0.2, 2.5);
    TPonto_print(ponto1);
    TPonto_set_x(ponto1, 2.0);
    TPonto_print(ponto1);
    float local_x;
    TPonto_get_x(ponto1, &local_x);
    printf("Valor recuperado de x: %f\n", local_x);

    TPonto* p2 = TPonto_create(3, 5);
    printf("A distancia eh: %f\n", TPonto_distancia(ponto1, p2));
    TPonto_delete(ponto1);
    return 0;
}