/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define N 3

int VerificaIdentidade (int matriz[][N]);

int main()
{
    int matriz[N][N] = {{1,0,0},{0,1,0},{0,0,1}};
    
    int resposta = VerificaIdentidade(matriz);
    
    printf("Resposta = %d",resposta);

    return 0;
}

int VerificaIdentidade (int matriz[][N]){
    int resposta = 0;
    
    for (int i=0;i<N;i++){
        
        for (int j=0;j<N;j++){
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


