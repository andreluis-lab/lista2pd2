#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
void lerFuncionarios(float *salario, int *tempo);
int main(void){
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TE�RICA ******\n");
    printf("QUEST�O 4:\n");
    float salario, salarioF;
    int tempo, bonus;
    lerFuncionarios(&salario, &tempo);
    if(tempo<1){
        bonus = 0;
    }else if (tempo>1 && tempo<=3){
       bonus = 100;
    }else if(tempo>3 && tempo <=6){
        bonus = 200;
    }else if(tempo>6&&tempo<=10){
        bonus = 300;
    }else if(tempo > 10){
        bonus = 500;
    }if(salario<=500){
        salarioF = salario*0.25 + salario;
        printf("O sal�rio com reajuste + bonus ficar�: %.2f", salarioF + bonus);
    }else if (salario>500 && salario<=1000){
        salarioF = salario*0.20 + salario;
        printf("O sal�rio com reajuste + bonus ficar�: %.2f", salarioF + bonus);
    }else if(salario>1000 && salario <=1500){
        salarioF = salario*0.15 + salario;
        printf("O sal�rio com reajuste + bonus ficar�: %.2f", salarioF + bonus);
    }else if(salario>1500&&salario<=2000){
        salarioF = salario*0.1 + salario;
        printf("O sal�rio com reajuste + bonus ficar�: %.2f", salarioF + bonus);
    }else if(salario > 2000){
        if(bonus == 0){
            printf("O funcion�rio n�o tem direito a nenhum aumento.\n");
        }
        salarioF = salario;
        printf("O sal�rio com reajuste + bonus ficar�: %.2f", salarioF + bonus);
    }
}
void lerFuncionarios(float *salario, int *tempo){
    printf("Informe o sal�rio do funcion�rio: ");
    scanf("%f", salario);
    printf("Informe o tempo de servi�o do funcion�rio (em anos, se for menos que 1 ano digite 0): ");
    scanf("%d", tempo);
}
