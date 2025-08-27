#ifndef TPONTO_H
#define TPONTO_H

typedef struct _ponto TPonto;
/**
 * Cria instâncias de ponto.
 * @param float x: valor da coordenada x
 * @param float y: valor da coordenada y
 * @return TPonto* uma instância na memória para um ponto preenchido
 */
TPonto* TPonto_create(float, float);
/**
 * Imprime um ponto com até duas casas decimais.
 * @param TPonto* instância para um ponto preenchido.
 */
void TPonto_print(TPonto*);

void TPonto_set_x(TPonto*, float);
#endif