#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
void potenciafunc(void){
    int x,y, resultado;
    printf("Escolha o valor da base: ");
    scanf("%d",&x);
    printf("Escolha o valor do expoente: ");
    scanf("%d", &y);
    resultado = x;
    for(int i = 2; i<=y; i++){
        resultado = resultado*x;
    }
    printf("%d^%d = %d", x, y, resultado);

}

int main (){
    setlocale(LC_ALL, "Portuguese");
     printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 10:\n");
    potenciafunc();
}