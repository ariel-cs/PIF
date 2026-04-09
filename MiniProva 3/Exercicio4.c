// ESSE
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    int *origem = (int*)malloc(n * sizeof(int));
    int *destino = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&origem[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        destino[i] = origem[i];
    }    

    printf("Vetor copiado: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",destino[i]);
    }   

    free(origem);
    free(destino);

    return 0;
}
