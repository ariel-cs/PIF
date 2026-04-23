#include <stdio.h>
#include "livro.h"

void set_book(Livro l,Livro *v,int n){
    for (int i=0; i<n;i++){
        if (v[i].id == -1)
        {
            v[i] = l;
        }
    }
}
