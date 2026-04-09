
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float notas[4];
}Aluno;

float media_turma(Aluno v[],int n){
    float media_t = 0;
    for (int i = 0; i < n; i++){
        float media_a = 0;
        for (int j = 0; j < 4; j++){
            media_a += v[i].notas[j];
        }
        media_t += media_a/4;
    }
    float media = media_t/n;
    return media;
}

int main(){

    int n;
    scanf("%d",&n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++){
        scanf(" %s",alunos[i].nome);
        for (int j = 0; j < 4; j++){
            scanf("%f",&alunos[i].notas[j]);
        }
    }

    float media = media_turma(alunos,n);

    printf("%.2f",media);

    return 0;
}