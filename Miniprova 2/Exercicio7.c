#include <stdio.h>

int contemSubstring(char *str, char *sub){

    char *sb = sub;
    char *st = str;

    while (*str != '\0')
    {
        if (*sb == '\0'){
            return 1;
        }
        
        if (*str == *sb){
            sb++;
            str++;
            
        }
        else{
            st++;
            str = st;
            sb = sub;
        }
    }
    if (*sb == '\0'){
        return 1;
    }
    
    return 0;
}

int main()
{
    
    int res = contemSubstring("programaacao","acao");
    printf("RESPOSTA: %d\n",res);
    int res2 = contemSubstring("programacao","pro");
    printf("RESPOSTA: %d\n",res2);
    int res3 = contemSubstring("programacao","grama");
    printf("RESPOSTA: %d\n",res3); 
    int res4 = contemSubstring("programacao","acao");
    printf("RESPOSTA: %d\n",res4);
    int res5 = contemSubstring("ponteia","teia");
    printf("RESPOSTA: %d\n",res5);

    return 0;
}
