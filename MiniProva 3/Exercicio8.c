
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
}Ponto;

Ponto somar_pontos(Ponto a,Ponto b){
    Ponto result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

int main(){

    Ponto p1,p2,soma;

    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);

    soma = somar_pontos(p1,p2);

    printf("Soma x: %d\nSoma y: %d",soma.x,soma.y);

    return 0;
}