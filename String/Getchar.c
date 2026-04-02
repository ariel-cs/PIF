#include <stdio.h>

int main(){
    
    char str[50];
    int i = 0;
    char ch = getchar();
    while (ch!='\n' && i < 50)
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    printf("%s",str);

    return 0;
}