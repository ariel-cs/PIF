#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = (int*)malloc(5 * sizeof(int));

    for(int i = 0;i < 5; i++){
        scanf("%d",&vetor[i]);
    }

    int *temp = (int*)realloc(vetor, 10 * sizeof(int));

    if (temp == NULL) {
        free(vetor);
        return 1;
    }

    vetor = temp;

    for (int i = 5; i < 10; i++)
    {
        scanf("%d",&vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }

    free(vetor);
    

    return 0;
}
