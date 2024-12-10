#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 7:\n");
    char nomes[3][21];
    for(int i = 0; i<3; i++){
        printf("Digite o %d nome com até 20 letras: ", i+1);
        scanf("%s", nomes[i]);
    }
    for(int i = 0; i<3; i++){
        printf("%d nome: %s\n", i+1, nomes[i]);
    }
}