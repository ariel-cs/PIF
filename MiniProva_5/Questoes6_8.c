
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *next;
} node;

node *createNode(int valor)
{
    node *novo = (node *)malloc(sizeof(node));

    if (novo == NULL)
    {
        return NULL;  
    }

    novo->valor = valor;  
    novo->next = NULL;     
    
    return novo;         
}

void add(node **head, int valor)
{

    node *novo = createNode(valor);

    if (*head == NULL)
    {
        *head = novo;
        return; 
    }

    node *atual = *head;
    while (atual->next != NULL)
    {
        atual = atual->next;  
    }

    atual->next = novo;
}

int tamanho(struct node *head) {
    if (head == NULL) return 0;
    return 1 + tamanho(head->next);
}

int somaLista(struct node *head){
    if (head == NULL) return 0;
    return head->valor + somaLista(head->next);
}

int buscaLista(struct node *head, int x){
    if (head == NULL) return 0;
    
    if (head->valor == x){
        return 1;
    }
    else{
        return buscaLista(head->next, x);
    }
}


int main() {
    node *head = NULL;
    add(&head, 10);
    add(&head, 20);

    printf("tamanho = %d\n", tamanho(head));
    printf("soma = %d\n", somaLista(head));
    printf("Tem? = %d\n", buscaLista(head, 10));
    return 0;
}
