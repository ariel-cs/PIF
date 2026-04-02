#include <stdio.h>

int main(){
    
    int z = 0;
    char str[4];
    int x = 0;

    scanf("%4s", str);
    printf("str = %s\n", str);
    printf("x = %d\n", x);
    printf("z = %d\n", z);

    printf("End str = %p\n", str);
    printf("End x = %p\n", &x);
    printf("End x = %p\n", &z);

    return 0;
}
