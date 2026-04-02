#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int n,i;
    float *v;
    float media = 0;

    printf("Quantas notas vao ser registradas:\n");
    scanf("%d",&n);

    v = (float *)malloc(n * sizeof(float));

    printf("Digite as notas dos alunos:\n");
    for (i = 0; i < n; i++){
        scanf("%f",&v[i]);
    }

    for (i = 0; i < n; i++){
        media = media + v[i];
    }


    media = media / n;

    free(v);

    printf("A media da turma: %f",media);

    return 0;
}
