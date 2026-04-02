#include <stdio.h>

void concatenar(char *destino, char *origem);

int main()
{
    char str[100];
    char stra[100];
    int i = 0;

    printf("Destino: ");
    scanf("%100s",stra);

    printf("Origem: ");
    scanf("%100s",str);


    concatenar(stra,str);

    printf("Concatenado: %s\n",stra);
    

    return 0;
}

void concatenar(char *destino, char *origem){
    while (*(destino + 1) != '\0'){
        destino++;
    }
    while (*origem != '\0')
    {
        *(destino + 1) = *origem;
        origem++;
        destino++;
    }
    *(destino + 1) = '\0';
    
}