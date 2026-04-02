
#include <stdio.h>

int main() {
    // Write C code here
    /*
    int x = 1, y = 2,z = [10];
    int *ip; //ponteiro
    ip = &x; // ip aponta pro endereço de de x ex: 100 
    y = *ip; // acessa o conteudo de quem o ip aponta (x) ent y = 1 agr
    *ip = 0; // muda o conteudo do endereço (*ip) então x agora é 0  
    */
    
    int x = 2;
    int *p;
    p = &x;
    
    printf("Valor de x: %d\n",x);
    printf("Endereco de x: %p\n",&x);
    printf("Valor guardado em p (endereco): %p\n",p); // p = valor dentro do ponteiro nesse caso endereço de x (&p printa o endereço do ponteiro)
    printf("Valor apontado por p: %d\n",*p);
    
    
    
    int v[4] = {5,10,15,20};
    int *ip = v;
    // ip = &v[0]; /* ip agora vai apontar para o endereço do primeiro conteudo da lista (endereço de 5) */
    
    printf("Conteudo do endereco + 1: %d\n",*ip + 1); // printa 5 + 1 no caso 6 
    printf("Endereco + 1 conteudo: %d\n",*(ip + 1)); /* printa o conteudo do proximo endereço da lista v no caso o conteudo do endereço de v[1] que seria 10 */
    
    for (int i = 0;i < 4; i++){
        printf("%d\n", *(ip + i)); // ou ip[i] 
    } // percorrendo a lista
    
    for (ip = v;ip < v + 4; ip++){
        printf("%d\n",*ip);
    } // percorrendo a memoria
    
    
    return 0;
}