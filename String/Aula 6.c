
#include <stdio.h>

char *Procurar(char *string, char ch);

int main()
{

    char str[] = "Ariel Cavalcanti";
    char *ptr = Procurar(str, 'C');

    printf("=======================================\n");
    printf("String inicial: %s\n",str);
    printf("String depois da funcao: %s\n",ptr);
    *(ptr-1) = 0;
    printf("String inicial modificada: %s\n",str);
    
    return 0;
}

char *Procurar(char *string, char ch){

    printf("String inicial: %s\n",string);
    printf("String endereco: %p\n",string);

    while (*string !=ch && *string !='\0')
    {
        printf("String atual: %s\n",string);
        printf("String endereco da string atual: %p\n",string);

        string++;
    }

    if (*string != '\0')
    {
        return string;
    }
    else{
        return NULL;
    }
    
    
}
