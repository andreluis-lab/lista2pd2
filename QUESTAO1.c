#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("****** LISTA 2 PD2 TE�RICA ******\n");
    printf("QUEST�O 1:\n");
    int soma, j = 0;
    srand(time(NULL));
    for(int i = 0; i<5; i++){
        int num1 = (rand() % 100) +1;
        int num2 = (rand() % 100) + 1;
        printf("Qual a soma de %d + %d, que s�o n�meros aleat�rios\n", num1, num2);
        scanf("%d", &soma);
        
        printf("Resposta correta: %d\n", num1 + num2);
        if(soma == num1 + num2){
            j++;
        }

    }
    printf("Acertou %d vezes!", j);



}