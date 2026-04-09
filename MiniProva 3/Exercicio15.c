
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float *notas;
}Aluno;

int main(){

    int n,q;
    float sd = 0,med;
    scanf("%d",&n);
    float prinm[n];

    Aluno alunos[n];

    for (int i = 0; i < n; i++){
        float ma = 0;

        scanf("%s",alunos[i].nome);
        scanf("%d",&q);

        alunos[i].notas = (float*)malloc(q * sizeof(float));

        for (int j = 0; j < q; j++)
        {
            scanf("%f",&alunos[i].notas[j]);
            ma += alunos[i].notas[j]/q;
        }
        sd += ma;
        prinm[i] = ma;
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("Media aluno %s: %.2f\n",alunos[i].nome,prinm[i]);
    }
    
    
    med = sd/n;

    printf("Media geral: %.2f",med);

    for (int i = 0; i < n; i++)
    {
        free(alunos[i].notas);
    }

    return 0;
}