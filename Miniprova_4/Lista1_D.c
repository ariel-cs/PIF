#include "stdlib.h"
#include "stdio.h"
#include <limits.h>

typedef struct Node{
    int valor;
    struct Node *next;
}Node;

void inicializa_lista(Node **head){
    *head = NULL;
}

Node* createNode(int valor){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->valor = valor;
    temp->next = NULL;
    return temp;
}

void adicionar_inicio(Node **head,int valor){
    Node* novo = createNode(valor);
    novo->next = *head;
    *head = novo;
}

void exibe_lista(Node *head){
    if(head == NULL){
        printf("Lista vazia");
    }
    else {
        while (head != NULL) {
            printf("%d ", head->valor);
            head = head->next;
        }
    }
    printf("\n");
}

int conta_nos(Node *head){
    int n = 0;
    Node *aux = head;
    while (aux != NULL) {
        n++;
        aux = aux->next;
    }
    return n;
}



void adiciona_ultimo(Node** head,int valor){
    Node *novo = createNode(valor);
    if (*head == NULL) {
        *head = novo;
    }
    else {
        Node *aux = *head;
        while(aux->next != NULL) {
            aux = aux->next;
        }
        aux->next =novo;
    }
}

Node* encontrar_meio(Node *head){
    int total = conta_nos(head);
    int passos = (total - 1)/2;

    Node* aux = head;
    int n = 0;
    while (n != passos) {
        n++;
        aux = aux->next;
    }
    return aux;
}

Node* mescla_ordenada(Node* l1, Node*l2){
    if(l1 == NULL){
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }

    Node* result = NULL;
    Node* ult = NULL;

    if(l1->valor <= l2->valor){
        result = l1;
        l1 = l1->next;
    }
    else {
        result = l2;
        l2 = l2->next;
    }
    ult = result;

    while (l1 != NULL && l2 != NULL) {
        if (l1->valor <= l2->valor) {
            ult->next = l1;
            l1 = l1->next;
        }
        else {
            ult->next = l2;
            l2 = l2->next;
        }
        ult = ult->next;
    }
    if (l1 !=NULL) {
        ult->next = l1;
    }
    if (l2 !=NULL) {
        ult->next = l2;
    }

    return result;
}

int tem_ciclo(Node* head){
    if (head == NULL) {
        printf("lista vazia\n");
        return 0;
    }
    Node* rapido = head;
    Node* lento = head;

    while (rapido != NULL && rapido->next != NULL) {
        rapido = rapido->next->next;
        lento = lento->next;

        if (rapido == lento){
            return 1;
        }
    }
    return 0;
}

void remove_meio(Node** head){
    if (*head == NULL) {
        printf("lista vazia\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    Node* rapido = *head;
    Node* lento = *head;
    Node* aux = lento;

    while (rapido->next != NULL && rapido->next->next != NULL) {
        aux = lento;
        lento = lento->next;
        rapido = rapido->next->next;
    }
    aux->next = lento->next;
    free(lento);
}

int soma_recursivo(Node* head){
    if(head == NULL){
        return 0;
    }
    return head->valor + soma_recursivo(head->next);
}

int main(){
    Node *head;
    Node *l2;
    inicializa_lista(&head);
    adiciona_ultimo(&head, 30);
    adiciona_ultimo(&head, 40);
    adiciona_ultimo(&head, 50);

    inicializa_lista(&l2);
    adiciona_ultimo(&l2, 30);
    adiciona_ultimo(&l2, 40);
    adiciona_ultimo(&l2, 50);

    //exibe_lista(head);
    //printf("endereço: %p meio: %d\n",encontrar_meio(head),encontrar_meio(head)->valor);
    //Node* mes = mescla_ordenada(head, l2);
    //remove_meio(&head);
    exibe_lista(head);
    //printf("%d",tem_ciclo(head));
    printf("%d",soma_recursivo(head));
}
