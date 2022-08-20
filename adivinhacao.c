#include <stdio.h>

int main()
{
    int numero, chute, tentativas = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Digite um numero: ");
    scanf("%d", &chute);
    while (chute != numero)
    {
        printf("Errou!\n");
        printf("Digite um numero: ");
        scanf("%d", &chute);
        tentativas++;
    }
    printf("Acertou!\n");
    printf("Numero de tentativas: %d\n", tentativas);
    return 0;
}