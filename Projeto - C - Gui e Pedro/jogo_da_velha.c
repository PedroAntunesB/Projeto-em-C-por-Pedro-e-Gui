#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 3
#define C 3
// segunda versão
void tabudata(char tabuleiro[L][C]);
void printftabu(char tabuleiro[L][C]);

int main(void)
{

    int colunasX, linhasX, colunasO, linhasO, rec, jogadas = 0;
    char tabuleiro[L][C]/*, inicio[100], login1[100] = "start"*/;

    /*printf("\nBem-vindo ao Jogo da Velha feito por Guilherme e Pedro\nDigite start para iniciar o jogo: ");
    scanf("%s", inicio);

    if (strcmp(inicio, login1) != 0)
    {

        printf("\nERRO!!!\n");
        system("main.exe\n");
    }*/

    //função que cria o tabuleiro do jogo e que printa ele na tela.
    tabudata(tabuleiro);

    printftabu(tabuleiro);


    // mostra o tabuleiro
    while (1)
    {
        // jogador X
        for (int l = 1; l <= 1; l++)
        {
            printf("\ncoluna da jogada: 0 - 2\n");
            scanf("%d", &colunasX);
            printf("\ndigite a linha da jogada: 0 - 2\n");
            scanf("%d", &linhasX);
            printf("\n");
    
            if (tabuleiro[linhasX][colunasX] == 'X' || tabuleiro[linhasX][colunasX] == 'O')
            {
                printf("\n\njogada invalida!!( NAO PODE COLOCAR EM CIMA DE UMA JOGADA JA FEITA )\n\n");
                l = 0;
            }
            
        }
        jogadas++;
        tabuleiro[linhasX][colunasX] = 'X';
        
        // Printa o tabuleiro
        printftabu(tabuleiro);
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
            printf("\n\nJogador 'X' venceu!\n");
            break;
        }

         if (jogadas == 9)
        {
            printf("\n\nJogo empatado!\n");
            break;
        }

        // jogador bolinha
        for (int r = 1; r <= 1; r++)
        {
            printf("\n\njogador bolinha\ncoluna da jogada:0 - 2\n");
            scanf("%d", &colunasO);
            printf("digite a linha da jogada:0 - 2\n");
            scanf("%d", &linhasO);
            printf("\n");

            if (tabuleiro[linhasO][colunasO] == 'X' || tabuleiro[linhasO][colunasO] == 'O')
            {
                printf("\njogada invalida!!( NAO PODE COLOCAR EM CIMA DE UMA JOGADA JA FEITA)\n\n");
                r = 0;
            }
            
        }
        jogadas++;
        tabuleiro[linhasO][colunasO] = 'O';

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
            break;
        }

         if (jogadas == 9) {
            printf("\nJogo empatado!\n");
            break;
        }
        printftabu(tabuleiro);
        
    }

        printf("\nVoce quer jogar novamente?\nDigite 1 para sim e 2 para nao\nDigite: ");
        scanf("%d", &rec);

        if (rec == 1)
        {
            return main();
        }
        else
        {
            printf("Obrigado por jogar!\n");
        }

    system("pause");
    return 0;
}


void tabudata(char tabuleiro[L][C])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            tabuleiro[i][j] = '-';
        }
    }
}

void printftabu(char tabuleiro[L][C]) {
        for (int i = 0; i < L; i++){

        for (int j = 0; j < C; j++)
        {
            printf("%c ",tabuleiro[i][j]);
        } 
        printf("\n");
        }

}