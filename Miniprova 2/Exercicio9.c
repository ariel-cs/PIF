#include <stdio.h>

int remove_ocorrencias(char *str, char alvo);

int main()
{
    char str[] = "banana";
    char a = 'a';
    
    int res = remove_ocorrencias(str,a);
    printf("%d\n", res);
    printf("%s\n",str);
    return 0;
}

int remove_ocorrencias(char *str, char alvo){
    int count = 0;
    char *escrita = str;

    while (*str != '\0')
    {
        if (*str != alvo)
        {
            *escrita = *str;
            escrita++;
        }
        else{
            count++;
        }
        str++;
    }
    *escrita = '\0';
    return count;
}
