#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
struct Livro { 
    char nome[50]; 
    char autor[30]; 
    float preco; 
};
void imprimeLivro(struct Livro livro){
    printf("Nome: %s\n", livro.nome);
    printf("Autor: %s\n", livro.autor);
    printf("Preço: %.2f\n", livro.preco);
}

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 16 :\n");
    struct Livro livro;
    strcpy(livro.nome,"Os irmãos Karamazov");
    strcpy(livro.autor, "Dostoiévski");
    livro.preco = 49.99;
    imprimeLivro(livro);

}