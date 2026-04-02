#include <stdio.h>
void troca (int *n);

int main(){

    int x = 2;
    printf("Antes da funcao: %d\n",x);

    troca(&x);

    printf("Depois da funcao: %d",x);


    return 0;
}

void troca (int *n){
    *n = 50;
}