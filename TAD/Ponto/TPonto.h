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
/**
 * Atribui um novo valor à coordenada x de uma instância.
 * @param TPonto* instância do ponto
 * @param float x novo valor da coordenada x
 */
void TPonto_set_x(TPonto*, float);
/**
 * Deleta instâncias de TPonto;
 * @param TPonto* ponteiro para um ponto
 */
void TPonto_delete(TPonto*);
/**
 * Acessa o valor da coordenada x e escreve no ponteiro passado por parâmetro.
 * @param TPonto* instância do ponto
 * @param float* ponteiro para a variável que receberá o valor de x
 */
void TPonto_get_x(TPonto*, float*);
#endif