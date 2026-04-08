#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
}Pessoa;

int main(){
    // Pessoa p2;
    // p = &p2;
    Pessoa* p;
    p = (Pessoa*)malloc(1 * sizeof(Pessoa));

    //scanf("%s",(*p).nome);
    scanf("%s",p->nome);
    scanf("%d", &p->idade);

    printf("Nome: %s\nIdade: %d",p->nome,p->idade);

    return 0;
}