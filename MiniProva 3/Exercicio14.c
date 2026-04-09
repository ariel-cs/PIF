
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Ponto;

float maior_dis(Ponto v[], int n){
    float maior = 0;
    for (int i = 0; i < n - 1;i++){
        for (int j = i + 1; j < n; j++) {
            float dx = v[i].x - v[j].x;
            float dy = v[i].y - v[j].y;
            float dis = sqrt(dx * dx + dy * dy);
            if (dis > maior)
                maior = dis;
        }
    }
    return maior;
}

int main(){

    int n;
    scanf("%d",&n);

    Ponto v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f %f",&v[i].x,&v[i].y);
    }

    float result = maior_dis(v,n);

    printf("maior dis: %.2f",result);

    return 0;
}