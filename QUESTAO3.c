#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 3:\n");
    srand(time (NULL));
    int dado, f1=0, f2=0 , f3=0, f4=0, f5=0, f6=0;
    for (unsigned long int i= 0; i < 1000000; i++){
        dado = (rand()%6) + 1;
        switch (dado){
            case 1: f1++; break;
            case 2: f2++; break;
            case 3: f3++; break;
            case 4: f4++; break;
            case 5: f5++; break;
            case 6: f6++; break;
        }
    }
    printf("O VALOR '1' CAIU %d VEZES", f1);
    printf("\n");
    printf("O VALOR '2' CAIU %d VEZES", f2);
    printf("\n");
    printf("O VALOR '3' CAIU %d VEZES", f3);
    printf("\n");
    printf("O VALOR '4' CAIU %d VEZES", f4);
    printf("\n");
    printf("O VALOR '5' CAIU %d VEZES", f5);
    printf("\n");
    printf("O VALOR '6' CAIU %d VEZES", f6);
    printf("\n");

    

}