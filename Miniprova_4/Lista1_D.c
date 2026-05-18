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




int main(){
    Node *head;
    inicializa_lista(&head);
    adicionar_inicio(&head,10);
    adicionar_inicio(&head, 20);
    adiciona_ultimo(&head, 30);
    adiciona_ultimo(&head, 40);
    adiciona_ultimo(&head, 50);
    exibe_lista(head);
    //printf("endereço: %p meio: %d\n",encontrar_meio(head),encontrar_meio(head)->valor);
}
