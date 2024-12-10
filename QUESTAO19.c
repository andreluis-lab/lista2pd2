#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

float calcularMedia(Aluno aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;
}

int verificarAprovacao(float media) {
    return media >= 7.0;
}

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    printf("****** LISTA 2 PD2 TEÓRICA ******\n");
    printf("QUESTÃO 19\n");
    int n;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        char *newline = strchr(alunos[i].nome, '\n');
        if (newline) *newline = '\0';

        printf("Nota da prova 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota da prova 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota da prova 3: ");
        scanf("%f", &alunos[i].nota3);
    }

    printf("\nResultado dos alunos:\n");
    for (int i = 0; i < n; i++) {
        float media = calcularMedia(alunos[i]);
        int aprovado = verificarAprovacao(media);
        printf("Aluno: %s - Média: %.2f - %s\n", 
               alunos[i].nome, 
               media, 
               aprovado ? "Aprovado" : "Reprovado");
    }

    return 0;
}
