#include "TStaticList.h"
#include "TContato.h"
#include <stdio.h>
#include <string.h>

int menu(){
    int op;
    printf("1 - Para Inserir\n2 - Para exibir\n 0-> Sair\nSua op: ");
    scanf("%d", &op);
    getchar();
    return op;
}
//Ler as informações do teclado e retornar um TContato*
TContato* NovoContato_UI(){
    char nome[128], telefone[64];
    printf("Digite o nome: ");
    fgets(nome, 128, stdin);
    nome[strlen(nome)-1] = '\0';
    //getchar();
    printf("Telefone: ");
    fgets(telefone, 128, stdin);
    telefone[strlen(telefone)-1] = '\0';
    //getchar();
    return TContato_create(nome, telefone);
}

int main(){
    TStaticList* agenda = TStaticList_create();
    int op;
    do{
        op = menu();
        switch(op){
            //Queimando memória aqui...
            case 1: 
                if(!TStaticList_is_full(agenda)){
                    TContato* novo = NovoContato_UI();
                    if(TStaticList_insert_end(agenda, novo))
                        puts("Contato inserido com sucesso!");
                    else
                        TContato_destroy(novo);
                }
                else    
                    puts("A lista está cheia!");
            break;
            case 2: TStaticList_print(agenda); break;
            case 0: puts("Ate outra hora!");
        }
    }while(op!=0);
    return 0;
}