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
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->valor = valor;
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

Node* busca(Node *head, int valor){
    if (head == NULL) {
        printf("lista vazia");
        return NULL;
    }
    else {
        Node *aux = head;
        while (aux != NULL && aux->valor != valor) {
            aux = aux->next;
        }
        return aux;
    }
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

void remove_primeiro(Node** head){
    if(*head != NULL){
        Node *temp = *head;
        *head = temp->next;
        free(temp);
    }
    else {
        printf("Lista vazia\n");
    }
}

void remove_ultimo(Node** head){
    if (*head == NULL){
        printf("Lista vazia\n");
        return;
    }
    Node* temp = *head;
    if (temp->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        Node* aux = *head;
        while (temp->next != NULL) {
            aux = temp;
            temp = temp->next;
        }
        free(temp);
        aux->next = NULL;
    }
}

int maior_valor(Node* head){
    if (head == NULL) {
        printf("Lista vazia\n");
        return INT_MIN;
    }
    else {
        Node *aux = head;
        int maior = INT_MIN;
        while (aux != NULL) {
            if (aux->valor > maior) {
                maior = aux->valor;
            }
            aux = aux->next;
        }
        return maior;
    }
}

void libera_lista(Node** head){
    if (*head == NULL) {
        printf("lista vazia\n");
    }
    else {
        Node *aux = *head;
        Node *anterior = *head;
        while (aux != NULL) {
            aux = aux->next;
            free(anterior);
            anterior = aux;
        }
        *head = NULL;
    }
}

void remove_valor(Node** head, int valor){
    if (*head == NULL) {
        printf("lista vazia\n");
        return;
    }
    Node* aux = *head;
    if ((*head)->valor == valor) {
        *head = (*head)->next;
        free(aux);
        return;
    }
    else {
        Node* ant = *head;
        while (aux != NULL && aux->valor != valor) {
            ant = aux;
            aux = aux->next;
        }
        if (aux == NULL) {
            printf("Valor não encontrado\n");
            return;
        }
        ant->next = aux->next;
        free(aux);
    }
}

void inverte_lista(Node **head){
    if (*head == NULL) {
        printf("lista vazia");
        return;
    }
    else {
        Node* atual = *head;
        Node* ant = NULL;
        Node* prox = NULL;
        while (atual != NULL) {
            prox = atual->next;
            atual->next = ant;
            ant = atual;
            atual = prox;
        }
        *head = ant;
    }
}

int main(){
    Node *head;
    inicializa_lista(&head);
    adicionar_inicio(&head,10);
    adicionar_inicio(&head, 20);
    //adiciona_ultimo(&head, 30);
    exibe_lista(head);
    //printf("%d\n",conta_nos(head));
    //Node* ret = busca(head, 10);
    //printf("Endereço: %p Numero: %d\n",ret,ret->valor);
    //remove_primeiro(&head);
    //exibe_lista(head);
    //adiciona_ultimo(&head, 40);
    //exibe_lista(head);
    //remove_ultimo(&head);
    //remove_valor(&head, 30);
    //inverte_lista(&head);
    //exibe_lista(head);
    //printf("%d\n",maior_valor(head));
    //libera_lista(&head);
}
