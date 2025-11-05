#include "TStack.h"
#include <stdio.h>
#include <string.h>




int main(){
    Stack* pilha = Stack_create();
    //Ler a string 
    char input[1024];
    //fgets(input, 1024, stdin);
    scanf("%s", input);
    //printf("%s", input);

    for(int i=0; i<strlen(input);i++){
        //printf("%d = %c \n", input[i], input[i]);
        if(!Stack_push(pilha, input[i]))
            printf("ERRO: ao empilhar o caractere %c\n", input[i]);
    }
    int temp;
    for(int i=0; i<strlen(input);i++){
        Stack_pop(pilha, &temp);
        if(input[i] != (char)temp)
        {
            printf("Nao eh palindromo.\n");
            Stack_destroy(pilha);
            return 0;    
        }
    }
    printf("Eh palindromo.\n");
    return 0;
}