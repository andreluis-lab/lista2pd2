#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 6:\n");
    int vetor[50];
    for (int i = 0; i<10; i++){
        vetor [i]= 2*(i+1);
        printf("posição %d do vetor = %d\n",i , vetor[i]);
    }
    
}