#include <stdio.h>

void paraMaiusculas(char *str);

int main()
{
    char str[100];
    int i = 0;

    char ch = getchar();
    while (ch!= '\n' && i < 100){
        
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    printf("Texto: %s\n",str);

    paraMaiusculas(str);

    printf("Texto modificado: %s",str);
    

    return 0;
}

void paraMaiusculas(char *str){
    while(*str != '\0'){
        if(*str >= 'a' && *str<= 'z'){
            *str = *str - 32;
        }
        str++;
    }
}
