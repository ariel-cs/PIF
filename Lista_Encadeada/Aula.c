#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node *next;
}Node;

Node * CreatNode(int valor){
    Node * temp = (Node *)malloc(sizeof(Node));
    temp->valor = valor;
    temp->next = NULL;
    return temp;
}

void add(Node** head,int valor){

    Node* novo =CreatNode(valor);
    if (*head == NULL){
        *head = novo;
        return;
    }
    else {
        Node* aux = *head;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = novo;
    }
}

void imprimir(Node* head){
    Node* temp = head;

    while(temp != NULL){
        printf("%d,",temp->valor);
        temp = temp->next;
    }
}

int main(){
    Node * head = NULL;
    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    add(&head,50);

    imprimir(head);

    return 0;
}
