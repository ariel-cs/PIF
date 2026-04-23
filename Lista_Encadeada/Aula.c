#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *next;
}node;

node * CreatNode(int valor){
    node * novo = (node *)malloc(sizeof(node));
    novo->valor = valor;
    novo->next = NULL;
    return novo;
}

void add(node** head,int valor){
    if (*head == NULL){
        *head = CreatNode(10);
    }
    else {

    }
}

int main(){
    node * head = NULL;
    add(&head,10);

    node* temp = head;
    while(temp != NULL){
        printf("%d,",temp->valor);
        temp = temp->next;
    }

    return 0;
}
