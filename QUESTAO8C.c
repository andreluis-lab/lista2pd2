#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 8:\n");
    int matriz[30][30], linha, coluna;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &coluna);
    printf("Digite os valores os valores da matriz:\n ");
    for(int i = 0; i<linha; i++){
        for(int j = 0; j<coluna; j++){
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i<linha; i++){
        for(int j = 0; j<coluna; j++){
        printf("%d ", matriz [i][j]);
        }
        printf("\n");
    }
    printf("Agora digite a a constante de 2 a 9 que deseja multiplicar a matriz em questão:\n");
    int k;
    scanf("%d", &k);
    for(int i = 0; i<linha; i++){
        for(int j = 0; j<coluna; j++){
        printf("%d ", k*matriz [i][j]);
        }
        printf("\n");
    }
}