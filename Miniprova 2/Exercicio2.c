#include <stdio.h>

void cifra_cesar(char *str,int *desloc){

    while (*str != '\0')
    {
        if (*str == ' '){
            *str = ' ';
        }
        else{
            *str += *desloc;
        }

        str++;
    }
    
}

int main()
{
    char str[] = "O sapo nao lava o pe";
    int d = 3;

    cifra_cesar(str,&d);

    printf("frase codificada: %s",str);

    return 0;
}

/*
char *cifra_cesar(char *str, int deslocamento) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)(str[i] + deslocamento);
    }
    return str;
}
*/
