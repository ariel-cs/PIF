#include <stdio.h>

void preencherVetorParidade(int *v,int *p, int t);

int main(){

    int tamanho = 5;
    int vetorOriginal[5] = {1,2,3,4,5};
    int vetorParidade[5];

    preencherVetorParidade(vetorOriginal,vetorParidade,tamanho); 

    printf("VETEOR PARIDADE: ");
    for (int i = 0;i < tamanho; i++){
        printf("[%d]",vetorParidade[i]);
    }

    return 0;
}

void preencherVetorParidade(int *v,int *p, int t){

    for (int i = 0; i < t; i++){

        if ( v[i] % 2 == 0){

            p[i] = 0;
        }
        else{
            p[i] = 1;
        }
    }

}