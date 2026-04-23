typedef struct{
    int id;
    char nome[100];
    char autor[100];
    int pag;
}Livro;

void set_book(Livro l,Livro *v,int size);
void renv_book(int id,Livro *v,int size);
void print_livro(Livro *v,int size);