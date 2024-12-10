#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
typedef struct {
    char nome[100];
    int idade;
    float salario;
} Funcionario;
float calcularMedia(Funcionario funcionarios[], int quantidade) {
    float somaSalarios = 0.0;

    for (int i = 0; i < quantidade; i++) {
        somaSalarios += funcionarios[i].salario;
    }

    return quantidade > 0 ? somaSalarios / quantidade : 0.0;
}

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 18\n");
    int n;
    printf("Digite o número de funcionários: ");
    scanf("%d", &n);
    Funcionario funcionarios[n];
    for (int i = 0; i < n; i++) {
        printf("\nFuncionário %d:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        char *newline = strchr(funcionarios[i].nome, '\n');
        if (newline) *newline = '\0';

        printf("Idade: ");
        scanf("%d", &funcionarios[i].idade);

        printf("Salário: ");
        scanf("%f", &funcionarios[i].salario);
    }
    float mediaSalarial = calcularMedia(funcionarios, n);
    printf("\nA média salarial dos funcionários é: %.2f\n", mediaSalarial);

    return 0;
}