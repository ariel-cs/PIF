
#include <stdio.h>

void PreencherMatriz(int tam,int m[tam][tam]);
void MultiMatriz(int tam,int m[][tam],int t[][tam],int r[][tam]);
void printMatriz(int tam,int p[][tam]);

int main()
{
    int t;
    printf("Tamanho da matriz:");
    scanf("%d",&t);
    
    int m1[t][t];
    int m2[t][t];
    int mult[t][t];
    
    printf("Matriz 1:\n");
    PreencherMatriz(t,m1);
    printf("Matriz 2:\n");
    PreencherMatriz(t,m2);
    
    MultiMatriz(t,m1,m2,mult);
    
    printf("Matriz 1:\n");
    printMatriz(t,m1);
    printf("Matriz 2:\n");
    printMatriz(t,m2);
    printf("Matriz Resultante:\n");
    printMatriz(t,mult);
   
    return 0;
}

void PreencherMatriz(int tam,int m[tam][tam]){
    
    for (int i=0;i<tam;i++){
        for (int j=0;j<tam;j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void MultiMatriz(int tam,int m[][tam],int t[][tam],int r[][tam]){
    
    for (int i=0;i<tam;i++){
        for (int j=0;j<tam;j++){
            r[i][j] = 0;
            for (int k = 0; k < tam; k++){
                r[i][j] += m[i][k] * t[k][j];
            }
        }
    }
}

void printMatriz(int tam,int p[][tam]){
    
    for (int i=0;i<tam;i++){
        for (int j=0;j<tam;j++){
            printf("[%d]",p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}