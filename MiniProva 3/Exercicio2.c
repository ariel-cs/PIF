#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int **matriz = (int**)malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++)
    {
        matriz[i] = (int*)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }

    int maior = matriz[0][0];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matriz [i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor = %d",maior);

    for (int i = 0; i < n; i++)
    {
        free(matriz[i]);
    }

    free(matriz);
    matriz = NULL;
    
    
    

    return 0;
}