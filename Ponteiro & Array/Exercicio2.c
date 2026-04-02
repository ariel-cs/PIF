#include <stdio.h>

void printve (int *v,int *t);

int main(){

    int t = 5;
    int v[] = {1,2,3,4,5};

    printve(&v[0],&t); // ou so v

    return 0;
}

void printve (int *v, int *t){

    printf("VETEOR: ");
    for (int i = 0;i < *t; i++){
        printf("[%d]",v[i]); // ou *(v + 1) ou *(v++)
    }

}