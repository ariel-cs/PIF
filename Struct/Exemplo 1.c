#include <stdio.h>

typedef struct
{
    char rua[50];
    int numero;
}Endereco;

typedef struct
{
    char nome[50];
    int idade;
    Endereco end;

}aluno;


int main()
{

    aluno al[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s",al[i].nome);
        scanf("%d",&al[i].idade); 
        scanf("%s",al[i].end.rua); 
        scanf("%d",&al[i].end.numero); 
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s %d %s %d\n",al[i].nome,al[i].idade,al[i].end.rua,al[i].end.numero);
    }
    
    

    return 0;
}
