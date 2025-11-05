#include "TStack.h"
#include <stdio.h>
#include <string.h>




int main(){
    Stack* pilha = Stack_create();
    //Ler a string 
    char input[1024];
    fgets(input, 1024, stdin);
    //printf("%s", input);

    for(int i=0; i<strlen(input);i++){
        if(input[i] == ' ' || input[i]== '.'){
            int temp;
            while(Stack_pop(pilha, &temp))
                printf("%c", temp);
            putchar(' ');
        }
        else
            if(!Stack_push(pilha, input[i]))
                printf("Stackoverflow: %c\n", input[i]);
    }
    putchar('\n');
    Stack_destroy(pilha);
    return 0;
}