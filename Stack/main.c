#include "TStack.h"
#include <stdio.h>





int main(){
    Stack* pilha = Stack_create();
    for(int i=1; i<=10;i++)
        if(!Stack_push(pilha, i))
            printf("Stackoverflow: %i\n", i);
    int temp;
    while(Stack_pop(pilha, &temp))
        printf("Valor removido da pilha: %d\n", temp);
    Stack_destroy(pilha);
    return 0;
}