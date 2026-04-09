
#include <stdio.h>
#include <stdlib.h>

int remover_negativo(int *p,int n){
    int count = 0;

    for (int i = 0; i < n; i++){
        if (p[i] >= 0){
            p[count] = p[i];
            count++;
        }
    }
    p = (int*)realloc(p, (count) * sizeof(int));
    return count;
}

int main(){

    int n = 5;
    int *v = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
    }

    int j = remover_negativo(v,n);

    for (int i = 0; i < j; i++)
    {
        printf("[%d]",v[i]);
    }
    
    free(v);

    return 0;
}