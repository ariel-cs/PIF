#include <stdio.h>


int VerificaIdentidade (int n, int matriz[][n]);

int main()
{
    int n;
    
    printf("Tamanho da matriz: ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int resposta = VerificaIdentidade(n,matriz);
    
    printf("Resposta : %d",resposta);

    return 0;
}

int VerificaIdentidade (int n, int matriz[][n]){
    int resposta = 0;
    
    for (int i=0;i<n;i++){
        
        for (int j=0;j<n;j++){
            if(i == j){
                if (matriz[i][j]!=1){
                    return 0;
                }
            }
            else{
                if (matriz[i][j] != 0){
                    return 0;
                }
            }
        }
    }
    return 1;
}