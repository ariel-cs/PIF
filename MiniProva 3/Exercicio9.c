
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float nt1;
    float nt2;
    float nt3;
}Aluno;

float calcular_media_aluno(Aluno a){
    float media = (a.nt1 + a.nt2 + a.nt3)/3;
    return media; 
}

int buscar_melhor_aluno(Aluno v[],int n){
    int melhor = 0;
    for (int i = 0; i < n; i++)
    {
        if (calcular_media_aluno(v[i]) > calcular_media_aluno(v[melhor])){
            melhor = i;
        }
    }
    return melhor;
}

int main(){

    int n;
    scanf("%d",&n);

    Aluno alunos[n];

    for (int i = 0;i < n; i++){
        scanf(" %s",alunos[i].nome);
        scanf("%f %f %f", &alunos[i].nt1,&alunos[i].nt2,&alunos[i].nt3);
    }

    int melhor = buscar_melhor_aluno(alunos, n);

    printf("Melhor aluno: %s\n",alunos[melhor].nome);
    printf("Nota: %.2f",calcular_media_aluno(alunos[melhor]));

    return 0;
}