
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float sal_b;
    float bonus;
}Funcionario;

int buscar_maior_total(Funcionario v[], int n){
    int maior = 0;
    float maior_s = 0;

    for (int i = 0;i<n;i++){
        float soma = v[i].sal_b + v[i].bonus;
        if (soma > maior_s){
            maior = i;
            maior_s = soma;
        }
    }
    return maior;
}

int main(){

    int n;
    scanf("%d",&n);
    
    Funcionario fun[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %s",fun[i].nome);
        scanf(" %f",&fun[i].sal_b);
        scanf(" %f",&fun[i].bonus);
    }

    int maior = buscar_maior_total(fun,n);

    printf("Nome: %s Salario: %.2f",fun[maior].nome,fun[maior].sal_b + fun[maior].bonus);

    return 0;
}