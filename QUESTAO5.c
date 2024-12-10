#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 5:\n");
    int codigo, i = 1;
    float conta = 0;
    while (i==1){
        printf("****************\n");
        printf("CARDÁPIO\n");
        printf("****************\n");
        printf("100 - CACHORRO QUENTE ------- R$1,20\n");
        printf("101 - BAURU SIMPLES --------- R$1,30\n");
        printf("102 - BAURU COM OVO --------- R$1,50\n");
        printf("103 - HAMBURGUER ------------ R$1,20\n");
        printf("104 - CHEESEBURGUER --------- R$1,70\n");
        printf("105 - SUCO ------------------ R$2,20\n");
        printf("106 - REFRIGERANTE ---------- R$1,00\n");
        printf("DIGITE 0 PARA SAIR\n");
        scanf("%d", &codigo);
        switch (codigo){
            case 100:
                conta = conta + 1.20;
                break;
            case 101:
                conta = conta + 1.30;
                break;
            case 102:
                conta = conta + 1.50;
                break;
            case 103:
                conta = conta + 1.20;
                break;
            case 104: 
                conta = conta + 1.70;
                break;
            case 105:
                conta = conta + 2.20;
                break;
            case 106:
                conta = conta + 1.00;
                break;
            default:
                i = 0;
                break;
        }   
    }printf("VOCÊ DEVE: %.2f", conta);
}
