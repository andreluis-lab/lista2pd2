#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
struct Produto { 
    char nome[30]; 
    float preco; 
}; 

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 17\n");
    struct Produto vet[3];
    for(int i = 0; i<3; i++){
        printf("Digite o nome do %d produto: ", i+1);
        scanf("%s", vet[i].nome);
        printf("Digite o preço do %d produto: ", i+1);
        scanf("%f", &vet[i].preco);
    }
}