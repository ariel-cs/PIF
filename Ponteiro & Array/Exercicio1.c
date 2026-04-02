#include <stdio.h>
void troca (int *a,int *b);

int main(){

    int a = 2;
    int b = 1;
    printf("A: %d\n",a);
    printf("B: %d\n",b);

    troca(&a,&b);
    printf("A: %d\n",a);
    printf("B: %d",b);


    return 0;
}

void troca (int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}