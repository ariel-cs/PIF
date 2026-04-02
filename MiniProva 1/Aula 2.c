

#include <stdio.h>

int main()
{
    /*
    //1 byte = 8bits
    //4 bytes = 8*4 = 32bits
    
    char caracter = 65; // 256 valores possiveis (1 byte)
    char str[12] = "Hello World";
    
    int i = 13; //32bits = 2^32 = 4.294.967.296
    //long int = 8bytes
    //short int = 2bytes
    
    float f = 3.14159;
    double d = 3.1415922135; //maior precisão
    //long float = double
    */
    
    /*
    int numero = 0;
    char c;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    
    printf("Digite um caracter: ");
    scanf(" %c",&c);
    
    printf("Numero digitado vezes 2 : %d\n",numero*2);
    printf("Caracter digitado : %c",c);
    */
    
    int numero = 0 , i =0;
    
    /*
    for (int i = 0; i<4; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&numero);
        
        if (numero == 4){
            printf("Acertou\n");
        }
        else if (numero == 2){
            printf("Acertou o segundo\n");
        }
        else {
            printf("Errou\n");
        }
    }
    */
    
    while (numero !=4)
    {
        printf("Tentativa %d : Digite um numero: ",i+1);
        scanf("%d",&numero);
        
        if (numero == 4){
            printf("Acertou\n");
        }
        else if (numero == 2){
            printf("Acertou o segundo\n");
        }
        else {
            printf("Errou\n");
        }
        i++;
    }
    
    /*do while colocar o do primeiro dps colocar o while ele vai fazer pra dps checar
    
    do
    {
        printf("Tentativa %d : Digite um numero: ",i);
        scanf("%d",&numero);
        
        if (numero == 4){
            printf("Acertou\n");
        }
        else if (numero == 2){
            printf("Acertou o segundo\n");
        }
        else {
            printf("Errou\n");
        }
        while (numero != 0);
    }
    */
    
    
    return 0;
}