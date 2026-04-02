#include <stdio.h>

int extrair_digitos(char *origem, char *destino);

int main()
{
    char str[100];
    char strd[100];
    int i = 0;

    char ch = getchar();
    while (ch != '\n' && i < 100)
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    int tam = extrair_digitos(str,strd);

    printf("Origem: %s\n",str);
    printf("Destino: %s\n",strd);
    printf("Retorno: %d",tam);
    

    return 0;
}

int extrair_digitos(char *origem, char *destino){
    int tam = 0;
    while (*origem != '\0'){
        if(*origem >= '0' && *origem <= '9'){
            *destino = *origem;
            tam++;
            destino++;
        }
        origem++;
    }
    *destino = '\0';
    return tam;
}
