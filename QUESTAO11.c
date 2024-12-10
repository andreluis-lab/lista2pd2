#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
void IMC(float peso, float altura);
int aptidao(int idade, float peso);

int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 11:\n");
    int idade;
    float altura, peso;
    printf("Informe a idade do(a) doador(a): ");
    scanf("%d", &idade);
    printf("Informe o peso do(a) doador(a): ");
    scanf("%f", &peso);
    if(aptidao(idade, peso)==1){
        return 1;
    }
    printf("Informe a altura do(a) doador(a): ");
    scanf("%f", &altura);
    IMC(peso, altura);   
}



int aptidao(int idade, float peso){
    if(peso <50){
        printf("Doador inadequado.");
        return 1;
    }
    if(idade <18 || idade>67){
        printf("Doador inadequado.");
        return 1;
    }
    return 0;
}
void IMC(float peso, float altura){
    if(peso/altura<18.5){
        printf("O doador está na situação de magreza.");
    }else if(peso/(altura*altura)<=24.9){
        printf("O doador está na situação de normalidade");
    }else if(peso/(altura*altura)<=29.9){
        printf("O doador está na situação de sobre peso (OBESIDADE GRAU I)");
    }else if(peso/(altura*altura)<=39.9){
        printf("O doador está na situação de obesidade (OBESIDADE GRAU II)");
    }else{
        printf("O doador está na situação de obesidade grave (OBESIDADE GRAU III)");
    }
}