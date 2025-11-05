#include "TStack.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindromo(char *input){
    Stack* pilha = Stack_create();

    for(int i=0; i<strlen(input);i++){
        //printf("%d = %c \n", input[i], input[i]);
        if(!Stack_push(pilha, input[i])){
            printf("ERRO: ao empilhar o caractere %c\n", input[i]);
            return false;
        }
    }
    int temp;
    for(int i=0; i<strlen(input);i++){
        if(!Stack_pop(pilha, &temp)){
            printf("ERRO: ao realizar a operacao de pop!");
            return false;
        }
        if(input[i] != (char)temp)
        {
            Stack_destroy(pilha);
            return false;    
        }
    }
    return true;
}

int main(){
    //Ler a string 
    char input[1024];
    scanf("%s", input);
    puts((palindromo(input))? "Eh palindromo.": "Nao eh palindromo");
    return 0;
}