#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
float calJuros(float PV, int n, float i){
    float J = PV*(n/30)*i;
    return J;
}
int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TE�RICA ******\n");
    printf("QUEST�O 11:\n");
    float J, PV, i;
    int n;
    printf("Informe o valor (PV): ");
    scanf("%f", &PV);
    printf("Infome o periodo em dias: ");
    scanf("%d", &n);
    printf("Informe a taxa de juros ao m�s: ");
    scanf("%f", &i);
    J = calJuros(PV, n, i);
    printf("O JUROS APLICADO AO VALOR �: %.2f", J);
}