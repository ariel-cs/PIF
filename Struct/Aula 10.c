#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int* valores;
    int tam;
}Vetor;

int main(){
    Vetor v;
    scanf("%d", &v.tam);

    v.valores = (int*)malloc(v.tam * sizeof(int));
    // int** temp = (int**)malloc(v.tam * sizeof(int*));
    
    for (int i = 0; i < v.tam; i++){
        scanf("%d", &v.valores[i]);
    }

    for (int i = 0; i < v.tam; i++){
        printf("%d ", v.valores[i]);
    }

    free(v.valores);

    return 0;
}
