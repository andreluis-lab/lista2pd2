#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
float calFV(void){
	float PV, i;
	int n;
	printf("Digite o valor do capital inicial (PV):");
	scanf("%f", &PV);
	printf("Digite o valor da taxa (i): ");
	scanf("%f", &i);
	printf("Digite o número de periodos do investimento (n): ");
	scanf("%d", &n);
    float FV = PV*(1+(i*n));
    return FV;
}
float calPV(void){
	float FV, i;
	int n;
	printf("Digite o valor do montante (FV):");
	scanf("%f", &FV);
	printf("Digite o valor da taxa (i): ");
	scanf("%f", &i);
	printf("Digite o número de periodos do investimento (n): ");
	scanf("%d", &n);
	float PV= FV/(1+(i*n));
	return PV;
}
float cali(void){
	float FV, PV;
	int n;
	printf("Digite o valor do montante (FV):");
	scanf("%f", &FV);
	printf("Digite o valor do capital inicial (PV): ");
	scanf("%f", &PV);
	printf("Digite o número de periodos do investimento (n): ");
	scanf("%d", &n);
	float i = ((FV/PV)-1)/n;
	return i;
}
int caln(void){
	float FV, PV, i;
	printf("Digite o valor do montante (FV):");
	scanf("%f", &FV);
	printf("Digite o valor do capital inicial (PV): ");
	scanf("%f", &PV);
	printf("Digite o valor da taxa (i): ");
	scanf("%f", &i);
	int n = ((FV/PV)-1)/i;
	return n;
}
int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 13:\n");
	printf("1 - CALCULAR FV\n");
	printf("2 - CALCULAR PV\n");
	printf("3 - CALCULAR i\n");
	printf("4 - CALCULAR n\n");
	int op;
	scanf("%d", &op);
	switch(op){
		case 1:
			printf("O montante resultará em: %.2f", calFV());
			break;
		case 2:
			printf("o capital inicial será: %.2f", calPV());
			break;
		case 3:
			printf("A taxa deverá ser: %.2f", cali());
			break;
		case 4:
			printf("O precisará de %d periodos de investimento.", caln());
			break;
		default:
			break;
	}
	

}