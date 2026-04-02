#include <stdio.h>

int eh_palindromo_estrito(char *str);

int main(){

    char str[] = "A man a plan a canal Panama";
    int res = eh_palindromo_estrito(str);
    printf("%d",res);
    return 0;
}

int eh_palindromo_estrito(char *str){
    
    char *final = str;
    while (*(final + 1) != '\0'){
        final++;
    }
    while (*str != '\0')
    {
        if (*str == ' '){
            str++;
        }
        if (*final == ' '){
            final--;
        }
        if(*str >= 'A' && *str <= 'Z'){
            *str += 32;
        }
        if(*final >= 'A' && *final <= 'Z'){
            *final += 32;
        }
        if (*str != *final)
        {
            return 0;
        }
        *str++;
        *final--;
    }
    return 1;
      
}
