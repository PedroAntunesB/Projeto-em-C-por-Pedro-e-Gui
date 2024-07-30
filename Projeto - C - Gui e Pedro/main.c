#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char escolha;

    printf("\nBem-vindo ao projeto em C feito pelo Guilherme e Pedro ( e supervisionado por Bernaro)");
    printf("Aqui temos a opcao de:\n");
    printf("1 - Calculadora\n");
    printf("2 - Jogo da velha\n");
    printf("3 - Jogo da forca\n");

    printf("Diga qual codigo voce quer: ");
    scanf(" %c", &escolha);

    switch (escolha)
    {

    case '1':
        system("calculadora.exe");
        return 0;
        break;

    case '2':
        system("jogo_da_velha.exe");
        return 0;
        break;

    case '3':
        system("jogo_da_forca.exe");
        return 0;
        break;

    default:
        printf("Codigo nao existente, escolha um dos abaixo");
        return main();
        break;
    }
}