
#include <stdio.h>
#include <stdlib.h>

int main(){

    char text1[50];
    char text2[50];
    int i = 0,j = 0;

    scanf("%s",text1);
    scanf("%s",text2);

    char *concat = (char*)malloc((100)*sizeof(char));

    while (text1[i] != '\0')
    {
        concat[i] = text1[i];
        i++;
    }

    while (text2[j] != '\0')
    {
        concat[i+j] = text2[j];
        j++;
    }
    concat[i+j] = '\0';
    
    printf("%s",concat);

    free(concat);

    return 0;
}