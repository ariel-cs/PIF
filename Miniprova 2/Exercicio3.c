#include <stdio.h>

int comprimento(char *str);

int main()
{
    
    char str[100];
    int i = 0;

    char ch = getchar();
    while (ch!='\n' && i < 100)
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    int tamanho = comprimento(str);
    printf("Tamanho da string: %d",tamanho);


    return 0;
}

int comprimento(char *str){
    int comprimento = 0; 
    while (*str != '\0'){
        comprimento++;
        str++;
    }
    return comprimento;
}