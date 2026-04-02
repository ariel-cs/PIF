
#include <stdio.h>


int main()
{
    char str[50];
    int i = 0;
    int num = 0, letra = 0, especial = 0;
    char ch = getchar();

    while (ch!='\n' && i < 50)
    {
        if (ch >= '0' && ch <= '9'){
            str[i] = ch;
            num++;
        }
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            str[i] = ch;
            letra++;
        }
        else{
            str[i] = ch;
            especial++;
        }

        if (ch == 'a' ||ch == 'e' ||ch == 'o' ||ch == 'u')
        {
            str[i] = 'i';
        }
        if (ch == 'A' ||ch == 'E' ||ch == 'O' ||ch == 'U')
        {
            str[i] = 'I';
        }
        
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    printf("Quatidade de num:%d\n", num);
    printf("Quatidade de letra:%d\n", letra);
    printf("Quatidade de especial:%d\n", especial);

    printf("Frase trocada: %s", str);
    
    return 0;
}