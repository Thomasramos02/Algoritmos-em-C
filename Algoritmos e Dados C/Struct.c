#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro{
    char titulo[50];
    char autor [20];
    char assunto [50];
    int id_livro;
};

int main(){
    struct Livro Livro1;
    struct Livro Livro2;
    
    strcpy(Livro1.titulo, "Titulo do livro");
    strcpy(Livro1.autor, "Autor");
    strcpy(Livro1.assunto, "Assunto do livro");
    Livro1.id_livro = 456;
    
    strcpy(Livro2.titulo, "Titulo do livro 2");
    strcpy(Livro2.autor, "Autor 2");
    strcpy(Livro2.assunto, "Assunto do livro 2");
    Livro2.id_livro = 457;
    
    printf("Titulo: %s\n",Livro1.titulo);
    printf("Autor %s\n",Livro1.autor);
    printf("Assunto: %s\n",Livro1.assunto);
    printf("Id: %d\n",Livro1.id_livro);
    
    printf("Titulo: %s\n",Livro2.titulo);
    printf("Autor %s\n",Livro2.autor);
    printf("Assunto: %s\n",Livro2.assunto);
    printf("Id: %d\n",Livro2.id_livro);
    
    return 0;
}
