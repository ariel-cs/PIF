
#include <stdio.h>

int main()
{
    /*
    LISTA
    int v[5] = {0};
    
    for (int i=0; i<5; i++){
        scanf("%d", &v[i]);
    }
    
    for (int i=0; i<5; i++){
        printf("v[%d] = %d\n",i, v[i]);
    }*/
    
    int m[2][2] = {0};
    int t[2][2];
    int s[2][2];
    
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            scanf("%d", &m[i][j]);
            t[j][i] = m[i][j];
            s[i][j] = m[i][j] + t[j][i];
            // i == j : diagonal
            // i + j = len(matriz) - 1 : diagonal inversa
        }
    }
    
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            //printf("m[%d][%d] = %d\n",i, j, m[i][j]);
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
    
    
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            //printf("m[%d][%d] = %d\n",i, j, m[i][j]);
            printf("[%d] ", t[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            //printf("m[%d][%d] = %d\n",i, j, m[i][j]);
            printf("[%d] ", s[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}