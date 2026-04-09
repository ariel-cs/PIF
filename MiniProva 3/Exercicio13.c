
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float x;
    float y;
}Ponto;

typedef struct{
    Ponto p1;
    Ponto p2;
}Retangulo;

float area_retangulos(Retangulo r){
    return (r.p1.x - r.p2.x) * (r.p1.y - r.p2.y);
}

int contar_retangulos_maiores(Retangulo v[],int n, float valor){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (area_retangulos(v[i]) > valor){
            count++;
        }
    }
    return count;
}

int main(){

    int n;
    scanf("%d",&n);

    Retangulo r[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f %f %f %f", &r[i].p1.x,&r[i].p1.y,&r[i].p2.x,&r[i].p2.y);
    }

    float v;
    scanf("%f",&v);
    
    int result = contar_retangulos_maiores(r,n,v);

    printf("%d",result);

    return 0;
}