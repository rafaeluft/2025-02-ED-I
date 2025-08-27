#include "TPonto.h"

int main(){
    TPonto *ponto1 = TPonto_create(0.2, 2.5);
    TPonto_print(ponto1);
    TPonto_set_x(ponto1, 2.0);
    TPonto_print(ponto1);
    return 0;
}