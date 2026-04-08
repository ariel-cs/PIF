#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
}Pessoa;

Pessoa* cria_pessoa(char* nome,int idade);
// sem typedef struct Pessoa*

int main(){
    
    Pessoa *p = cria_pessoa("fulano",20);
    printf("Nome: %s\nIdade: %d",p->nome,p->idade);


    return 0;
}

Pessoa* cria_pessoa(char* nome,int idade){
    Pessoa *temp = (Pessoa*)malloc(1 * sizeof(Pessoa));
    if (temp != NULL){
        temp->idade = idade;
        strcpy(temp->nome,nome);
        return temp;
    }
    return NULL; // ou so  return temp;
}