#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    int i, j, k, arm, arm2, arm3, arm4, vence = 1, rec, jogadas = 0;
    char tabuleiro[3][3], inicio[100], login1[100] = "start";

    printf("\nBem-vindo ao Jogo da Velha feito por Guilherme e Pedro\nDigite start para iniciar o jogo: ");
    scanf("%s", inicio);

    if (strcmp(inicio, login1) != 0)
    {

        printf("\nERRO!!!\n");
        system("main.exe\n");
    }

    // criador do tabuleiro
    printf("Tabuleiro inicial\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            tabuleiro[i][j] = '-';
        }
    }

    printf("\n  0 1 2\n");

    for (i = 0; i < 3; i++)
    {

        printf("%d ", i);
        for (j = 0; j < 3; j++)
        {

            printf("%c ", tabuleiro[j][i]);
        }

        printf("\n");
    }

    // mostra o tabuleiro
    while (vence > 0)
    {
        // jogador X
        int l;
        for (l = 1; l <= 1; l++)
        {
            printf("coluna da jogada: 0 - 2\n");
            scanf("%d", &arm);
            printf("digite a linha da jogada: 0 - 2\n");
            scanf("%d", &arm2);
            if (tabuleiro[arm][arm2] == 'X' || tabuleiro[arm][arm2] == 'O')
            {
                printf("\njogada invalida!!( NAO PODE COLOCAR EM CIMA DE UMA JOGADA JA FEITA )\n");
                arm = 7;
                arm2 = 9;
                l = 0;
            }
        }
        tabuleiro[arm][arm2] = 'X';
        
        printf("\n");
        printf("\n   0 1 2\n");

        // Printa o tabuleiro
        for (k = 0; k < 3; k++)
        {
            printf("%d  ", k);
            for (j = 0; j < 3; j++)
            {
                printf("%c ", tabuleiro[j][k]);
            }

            printf("\n");
        }
        // Verifica se jogador 'X' venceu
        if ((tabuleiro[0][0] == 'X' && tabuleiro[0][1] == 'X' && tabuleiro[0][2] == 'X') ||
            (tabuleiro[1][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[1][2] == 'X') ||
            (tabuleiro[2][0] == 'X' && tabuleiro[2][1] == 'X' && tabuleiro[2][2] == 'X') ||
            (tabuleiro[0][0] == 'X' && tabuleiro[1][0] == 'X' && tabuleiro[2][0] == 'X') ||
            (tabuleiro[0][1] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][1] == 'X') ||
            (tabuleiro[0][2] == 'X' && tabuleiro[1][2] == 'X' && tabuleiro[2][2] == 'X') ||
            (tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X') ||
            (tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X'))
        {
            printf("\nJogador 'X' venceu!\n");
            vence = vence - 1;
            break;
        }

         if (jogadas == 9)
        {
            printf("\nJogo empatado!\n");
            vence = 0;
            break;
        }

        // jogador bolinha
        int r;
        for (r = 1; r <= 1; r++)
        {
            printf("\njogador bolinha\ncoluna da jogada:0 - 2\n");
            scanf("%d", &arm3);
            printf("digite a linha da jogada:0 - 2\n");
            scanf("%d", &arm4);

            if (tabuleiro[arm3][arm4] == 'X' || tabuleiro[arm3][arm4] == 'O')
            {
                printf("\njogada invalida!!( NAO PODE COLOCAR EM CIMA DE UMA JOGADA JA FEITA)\n");
                r = 0;
                arm4 = 7;
                arm3 = 9;
            }
            tabuleiro[arm3][arm4] = 'O';
        }

        if ((tabuleiro[0][0] == 'O' && tabuleiro[0][1] == 'O' && tabuleiro[0][2] == 'O') ||
            (tabuleiro[1][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[1][2] == 'O') ||
            (tabuleiro[2][0] == 'O' && tabuleiro[2][1] == 'O' && tabuleiro[2][2] == 'O') ||
            (tabuleiro[0][0] == 'O' && tabuleiro[1][0] == 'O' && tabuleiro[2][0] == 'O') ||
            (tabuleiro[0][1] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][1] == 'O') ||
            (tabuleiro[0][2] == 'O' && tabuleiro[1][2] == 'O' && tabuleiro[2][2] == 'O') ||
            (tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O') ||
            (tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O'))
        {
            printf("\nJogador 'O' venceu!\n");
            vence = vence - 1;
            break;
        }

         if (jogadas == 9)
        {
            printf("\nJogo empatado!\n");
            vence = 0;
            break;
        }

        printf("\n   0 1 2\n");

        // Printa o tabuleiro
        for (k = 0; k < 3; k++)
        {
            printf(" %d ", k);
            for (j = 0; j < 3; j++)
            {
                printf("%c ", tabuleiro[j][k]);
            }
            printf("\n");
        }
    }

    if (vence == 0)
    {
        printf("Voce quer jogar novamente?\nDigite 1 para sim e 2 para nao\nDigite: ");
        scanf("%d", &rec);

        if (rec == 1)
        {
            return main();
        }
        else
        {
            printf("Obrigado por jogar!\n");
        }
    }
    system("pause");
    return 0;
}