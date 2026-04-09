
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
}Produto;

int buscar_produto_mais_caro(Produto v[],int n){
    int maior = 0;

    for (int i = 0; i < n; i++){
        if (v[i].preco > v[maior].preco){
            maior = i;
        } 
    }
    return maior;
}

int main(){

    int n;
    scanf("%d",&n);

    Produto produtos[n];
    for (int i = 0;i < n;i++){
        scanf(" %s",produtos[i].nome);
        scanf(" %f",&produtos[i].preco);
        scanf(" %d",&produtos[i].quantidade);
    }

    int maior =  buscar_produto_mais_caro(produtos,n);

    printf("Produto: %s Preço: %.2f Quantidade: %d",produtos[maior].nome,produtos[maior].preco,produtos[maior].quantidade);

    return 0;
}