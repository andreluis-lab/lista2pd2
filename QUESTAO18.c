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
    printf("****** LISTA 2 PD2 TE�RICA ******\n");
    printf("QUEST�O 18\n");
    int n;
    printf("Digite o n�mero de funcion�rios: ");
    scanf("%d", &n);
    Funcionario funcionarios[n];
    for (int i = 0; i < n; i++) {
        printf("\nFuncion�rio %d:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        char *newline = strchr(funcionarios[i].nome, '\n');
        if (newline) *newline = '\0';

        printf("Idade: ");
        scanf("%d", &funcionarios[i].idade);

        printf("Sal�rio: ");
        scanf("%f", &funcionarios[i].salario);
    }
    float mediaSalarial = calcularMedia(funcionarios, n);
    printf("\nA m�dia salarial dos funcion�rios �: %.2f\n", mediaSalarial);

    return 0;
}