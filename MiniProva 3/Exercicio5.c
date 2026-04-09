#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,x;
    scanf("%d",&n);

    int *vetor = (int*)malloc(n * sizeof(int));

    printf("Valor do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
    }
    printf("Valor de x: ");
    scanf("%d",&x);

    int posi = -1;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] == x)
        {
            posi = i;
            break;
        }
    }
    
    if (posi != -1)
    {
        for (int i = posi; i < n - 1; i++)
        {
            vetor[i] = vetor[i+1];
        }
        int *temp = (int*)realloc(vetor, (n-1) * sizeof(int));
        vetor = temp;
        n--;
    }

    for(int i = 0; i < n; i++){
        printf("%d ",vetor[i]);
    }

    free(vetor);
    


    return 0;
}