#include <stdio.h>

int main()
{
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numero_secreto = 42;
    int chute;

    printf("Qual é o seu chute?\n");
    scanf("%d", &chute);
    printf("O Seu chute foi %d\n", chute);

    return 0;
}