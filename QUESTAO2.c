#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("****** LISTA 2 PD2 TE�RICA ******\n");
    printf("QUEST�O 2:\n");
    int i = 0;
    float numeros[50], soma = 0;
    while (1){
        printf("Digite um valor: ");
        scanf("%f", &numeros[i]);
         if (numeros [i]<=0) break;
        soma = soma + numeros[i];
        i++;
    }
    printf("Somat�rio: %.2f", soma);
    printf("\n");
    printf("M�dia: %.2f", soma/i);
    printf("\n");
    printf("Valores lidos: %d", i);
    printf("\n");
}