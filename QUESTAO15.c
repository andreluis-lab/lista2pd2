/*LETRA A
carro1.preco
LETRA B: */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
struct Carro { 
    char modelo[30]; 
    int ano; 
    float preco; 
}; 

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 15 LETRA B:\n");
    struct Carro carro1 ;
    strcpy(carro1.modelo, "Celta");
    carro1.ano = 2007;
    carro1.preco = 13000;
}