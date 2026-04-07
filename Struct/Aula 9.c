#include <stdio.h>

struct point{
        int x;
        int y;
    };

/*
typedef struct point{
        int x;
        int y;
    }point; -----> apelido


*/

int main()
{   

    struct point pt;
    pt.x = 0;
    pt.y = 1; //recebeu as coodernadas 1 e 0

    struct point pt2 = {4,3}; //outro jeito de definir

    int dx = pt.x - pt2.y;

    printf("%d",dx);


    return 0;
}