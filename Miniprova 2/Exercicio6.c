#include <stdio.h>

int compara_sufixo(char *str, char *sufixo){

    int cont1= 0;
    int cont2= 0;
    char *lenst = str; 

    while (*lenst != '\0'){
        cont1++;
        lenst++;
    }

    lenst = sufixo;

    while (*lenst != '\0'){
        cont2++;
        lenst++;
    }

    char *fim = str + cont1 - cont2;

    while (*fim != '\0')
    {
        if (*fim != *sufixo){
            return 0;
        }
        fim++;
        sufixo++;
    }
    return 1;
}

int main()
{
    int res = compara_sufixo("relatorio.pdf", ".pdf");
    printf("%d",res);
    return 0;
}
