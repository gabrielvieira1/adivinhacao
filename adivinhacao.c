#include <stdio.h>

#define NUMERO_TENTATIVAS 5

int main()
{
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numero_secreto = 42;
    int chute;
    int tentativas = 1;

    while (1)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute?\n");

        scanf("%d", &chute);
        printf("Você chutou %d\n", chute);

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
    }

    printf("Fim do jogo\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
}