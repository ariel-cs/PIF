#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1000;
    int **matriz = (int **)malloc(n * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    //** matriz = [[ponteiro][ponteiro][ponteiro]]
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
        //matriz[i] = [linha[0]][linha[1]][linha[2]]
        for (int j = 0; j < n; j++) {
            //matriz[l][c] = i+j;
            matriz[i][j] = i+j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;
    return 0;
}