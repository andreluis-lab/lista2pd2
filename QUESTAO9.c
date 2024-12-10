#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 9:\n");
    int matriz[3][3],vetor[3], mult[3]={0,0,0};
    printf("Digite os valores os da matriz:\n ");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }
    printf("Agora digite os valores do vetor:\n");
    for(int i = 0; i<3 ; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            mult[i]= mult[i]+ matriz[i][j]*vetor[j];
        }
    }
    printf("VETOR [1][3] = ");
    for(int i = 0; i<3 ; i++){
        printf("%d ", mult[i]);
    }
}
