// ESSE
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,x,p;
    scanf("%d",&n);

    int *vetor = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vetor[i]);
    }
    scanf("%d",&x);
    scanf("%d",&p);
    if(p > n){
        printf("coloque um valor entre 0 e %d",n);
        return 1;
    }
    n++;

    int *temp = (int*)realloc(vetor,n * sizeof(int));
    vetor = temp;
    for (int i = n; i > p; i--)
    {
        vetor[i] = vetor[i-1];
    }
    vetor[p] = x;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d",vetor[i]);
    }
    free(vetor);

    return 0;
}