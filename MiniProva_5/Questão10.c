#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

// Insere um nó no final da lista
No *inserir(No *cabeca, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (cabeca == NULL)
        return novo;

    No *atual = cabeca;
    while (atual->prox != NULL)
        atual = atual->prox;
    atual->prox = novo;

    return cabeca;
}

// Função recursiva: avança até NULL, depois escreve ao voltar
void gravar_invertido(No *no, FILE *saida) {
    if (no == NULL)       // caso base — fim da lista
        return;

    gravar_invertido(no->prox, saida);  // desce até o fim
    fprintf(saida, "%d\n", no->valor);  // escreve ao subir
}

void liberar_lista(No *cabeca) {
    while (cabeca != NULL) {
        No *temp = cabeca;
        cabeca = cabeca->prox;
        free(temp);
    }
}

int main(void) {
    FILE *entrada = fopen("numeros.txt", "r");
    if (!entrada) {
        perror("Erro ao abrir numeros.txt");
        return 1;
    }

    No *lista = NULL;
    int n;
    while (fscanf(entrada, "%d", &n) == 1)
        lista = inserir(lista, n);
    fclose(entrada);

    FILE *saida = fopen("invertido.txt", "w");
    if (!saida) {
        perror("Erro ao criar invertido.txt");
        liberar_lista(lista);
        return 1;
    }

    gravar_invertido(lista, saida);
    fclose(saida);

    liberar_lista(lista);
    printf("Arquivo invertido.txt gerado com sucesso.\n");
    return 0;
}
