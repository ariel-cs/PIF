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
        printf("%d ",temp->valor);
        temp = temp->next;
    }
    printf("\n");
}

void removeUltimo(Node** h){
    if (*h == NULL){
        printf("Lista Vazia\n");
    } else if ((*h)->next == NULL){
        free(*h);
        *h = NULL;
    } else {
        Node* aux = *h;
        while (aux->next->next != NULL){
            aux = aux->next;
        }
        free(aux->next);
        aux->next = NULL;
    }

}

void removeUltimoDoisPonteiros(Node** h){
    if (*h == NULL){
        printf("Lista Vazia\n");
    } else if ((*h)->next == NULL){
        free(*h);
        *h = NULL;
    } else {
        Node* aux = *h;
        Node* n = *h;
        while (aux->next != NULL){
            n = aux;
            aux = aux->next;
        }
        free(aux);
        n->next = NULL;
    }

}

Node* busca(Node* h,int valor){
    if(h == NULL){
        return NULL;
    }
    else {
        Node* aux = h;
        while (aux != NULL && aux->valor != valor){
            aux = aux->next;
        }
        return aux;
    }
}

void removePos(Node** h,int pos){
    if(*h == NULL){
        printf("Lista vazia\n");
    }
    else if ((*h)->next == NULL && pos > 0){
        printf("Não é possivel remover\n");
    }
    else {
        int cont = 0;
        Node* aux = *h;
        Node* ant = *h;
        while (aux != NULL && cont != pos){
            cont++;
            ant = aux;
            aux = aux->next;
        }
        if (aux != NULL) {
            ant->next = aux ->next;
            free(aux);
        }
        else {
            printf("Não existe\n");
        }
    }
}

void inserirPos(Node** h,int pos,int valor){
    Node* novo = CreatNode(valor);
    if (*h == NULL && pos > 0) {
        printf("Não é possivel inserir\n");
    }
    else if(*h == NULL){
        printf("Lista vazia\n");
    }
    else {
        int posAtual = 0;
        Node* aux = *h;
        Node* ant = *h;
        while (aux != NULL && posAtual != pos) {
            posAtual++;
            ant = aux;
            aux = aux ->next;
        }
        if (aux != NULL) {
            ant->next = novo;
            novo->next = aux;
        }
        else {
            printf("Não encontrado\n");
        }
    }

}

int main(){
    Node * head = NULL;
    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    add(&head,50);
    add(&head,60);

    imprimir(head);

    Node* ret = busca(head, 40);
    if (ret == NULL) {
        printf("Não encontrado\n");
    }
    else {
        printf("Valor: %d\nEndereço: %p\n",ret->valor,ret);
    }

    removePos(&head, 3);

    inserirPos(&head, 2,100);

    //removeUltimo(&head);
    //removeUltimoDoisPonteiros(&head);

    imprimir(head);

    return 0;
}
