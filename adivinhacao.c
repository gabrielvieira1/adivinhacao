#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_TENTATIVAS 5

int main()
{
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    srand(time(NULL));
    int numero_secreto = rand() % 100;

    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;

    while (!acertou)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu o chute?\n");
        scanf("%d", &chute);
    
        if (chute < 0)
        {
            printf("O número não pode ser negativo\n");
            continue;
        }

        int acertou = chute == numero_secreto;
        int maior = chute > numero_secreto;

        if (acertou)
        {
            printf("Parabéns, você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            break;
        }
        else if (maior)
        {
            printf("Seu chute foi maior que o número secreto\n");
        }
        else
        {
            printf("O seu chute foi menor do que o número secreto.\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numero_secreto) / 2.0;
        //double pontosperdidos = chute - numero_secreto / (double)2; // casting para double
        pontos = pontos - pontosperdidos;
    }

    printf("Fim do jogo\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
}