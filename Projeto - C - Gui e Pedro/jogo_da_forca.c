#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    char inicio[6], login[6] = "start", palavra[100], tentativa, palavra2[100];
    int i, j, vencer = 0;

    printf("\nBem-vindo ao jogo da forca feito por Guilherme e Pedro\nDigite start para iniciar o jogo: ");
    scanf("%s", inicio);

    // Verificação de entrada inicial, caso o valor seja diferente, retornará ao main

    if (strcmp(inicio, login) != 0)
    {
        printf("\nERRO!!!\n");
        system("main.exe\n");
    }

    printf("\nEscolha a palavra que voce deseja que seu adversario descubra: ");
    scanf("%s", palavra);

    printf("Descubra: \n");

    int tamanho = strlen(palavra);

    for (i = 0; i < tamanho; i++)
    {
        printf("_ ");
        palavra2[i] = '_';
    }

    palavra2[tamanho] = '\0';

    printf("\n");

    while (vencer == 0)
    {

        printf("Digite sua tentativa: ");
        scanf(" %c", &tentativa);

        for (j = 0; j < tamanho; j++)
        {
            if (tentativa == palavra[j])
            {

                printf("Voce acertou uma letra!\n");
                palavra2[j] = palavra[j];
            }
            else
            {
                continue;
            }
        }

        for (i = 0; i < tamanho; i++)
        {
            printf("%c ", palavra2[i]);
        }
        printf("\n");

        if (strcmp(palavra, palavra2) == 0)
        {
            printf("voce ganhou!\n");
            vencer += 1;
            break;
        }
        else
        {
            printf("Voce errou!\n");
            continue;
        }
    }

    system("pause");
    return 0;
}