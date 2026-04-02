#include <stdio.h>

void conta_caracteres(char *str,int *vogais, int *consoantes);

int main(){
    
    char texto[] = "O corvo";
    int v = 0,c = 0;

    conta_caracteres(texto, &v,&c);

    printf("Texto: %s\n",texto);
    printf("quantidade de vogais: %d\n",v);
    printf("quantidade de consoantes: %d\n",c);

    return 0;
}

void conta_caracteres(char *str,int *vogais, int *consoantes){
    while (*str != '\0'){
        if (*str >= 'a' && *str <= 'z')
        {
            if (*str == 'a' ||*str == 'e' ||*str == 'i' ||*str == 'o' ||*str == 'u'){
            
                *vogais+=1;
            }
            else{
                *consoantes+=1;
            }
        }
        str++;
    }
}