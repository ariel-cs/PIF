#include <stdio.h>

#define MAX 3

int somaDigitos(int n){
    if (n == 0){
        return 0;
    }
    
    return n % 10 + somaDigitos(n/10);
}

int contaPares(int v[], int n){
    
    if (n == 0) return 0;
    
    if (v[n - 1] % 2 == 0){
        return 1 + contaPares(v, n - 1);
    }
    
    else{
        return 0 + contaPares(v, n - 1);
    }
    
}

int estaNoVetor(int v[], int n, int x){
    if (n == 0) return 0;
    
    if(v[n-1] == x){
        return 1;
    }
    
    else{
        return 0 + estaNoVetor(v, n-1, x);
    }
}

void imprimeInverso(int v[], int inicio, int fim){
    if (fim < inicio){
        return;
    }
    
    printf("%d ",v[fim]);
    imprimeInverso(v, inicio, fim - 1);
}

int somaLinha(int m[][MAX], int linha, int col, int n){
    
    if(col < 0){
        return 0;
    }
    
    return m[linha][col] + somaLinha(m, linha, col - 1, n);
}

int main()
{
    int matrix[3][MAX] = {{1,2,3},{4,5,6},{7,8,9}};
    int lista[] = {1,2,6,9,0,3};
    int n = 6;
    
    printf("Numeros quantidade de pares: %d\n",contaPares(lista, n));
    printf("Numero : 234 Soma: %d\n",somaDigitos(234));
    printf("O numero 9 está na lista: %d\n",estaNoVetor(lista, n, 9));
    //imprimeInverso(lista, 0, 5);
    printf("Soma da linha 1: %d",somaLinha(matrix, 1, 2, 3));
    
    

    return 0;
}
