#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define X 100

int main(void){

    //demais operações
    float qtd_numeros[X];
    int i, k1, j;
    char esc;
    float res = 0, res2 = 1;

    // potenciação
    float base, exp, resul;
    
    // radiciação
    float radicando, indice;
    double raiz;

    printf("\nCalculadora COMPLEXA!!!\nby Pedro e Guilherme\n\n");

    printf("Escolha o tipo de calculo que voce quer fazer (de acordo com o sinal respectivo):\nSoma = + \nsubtracao = - \nMultiplicacao = * \nDivisao = / \nRadiciacao = r \nPotenciacao = p\nEscolha: ");
    scanf(" %c", &esc);

    switch (esc){

    case '*':

        printf("\nQuantos numeros vc quer calcular?\nDiga: ");
        scanf("%d", &k1);

        for (i = 0; i < k1; i++)
        {
            printf("\nEscolha um numero:\n ");
            scanf("%f", &qtd_numeros[i]);
        }

        for (j = 0; j < k1; j++)
        {
            res2 = res2 * qtd_numeros[j];
        }

        printf("Resultado = %.0f\n", res2);
        break;

    case '/':

        printf("\nQuantos numeros vc quer calcular?\nDiga: ");
        scanf("%d", &k1);

        for (i = 0; i < k1; i++)
        {
            printf("\nEscolha um numero:\n ");
            scanf("%f", &qtd_numeros[i]);

            if (qtd_numeros[X] == 0)
            {
                printf("ERROR!!!\nNAO PODE DIVIDIR POR 0, ASNO!!!");
            }
        }

        res2 = qtd_numeros[0];

        for (j = 1; j < k1; j++)
        {
            res2 = res2 / qtd_numeros[j];
        }

        printf("\nResultado = %.2f\n", res2);
        break;

    case '+':

        printf("\nQuantos numeros vc quer calcular?\nDiga: ");
        scanf("%d", &k1);

        for (i = 0; i < k1; i++)
        {
            printf("\nEscolha um numero:\n ");
            scanf("%f", &qtd_numeros[i]);
        }

        for (j = 0; j < k1; j++)
        {
            res = res + qtd_numeros[j];
        }

        printf("\nResultado = %.0f\n", res);
        break;

    case '-':

        printf("\nquantos numeros vc quer calcular?\nDiga: ");
        scanf("%d", &k1);

        for (i = 0; i < k1; i++)
        {
            printf("\nEscolha um numero:\n ");
            scanf("%f", &qtd_numeros[i]);
        }

        res = qtd_numeros[0];

        for (j = 1; j < k1; j++)
        {
            res = res - qtd_numeros[j];
        }

        printf("Resultado = %.0f\n", res);
        break;

    case 'p':

        printf("\nNeste calculo utilizamos apenas 2 numeros, base e expoente\nDigite o numero da base: ");
        scanf("%f", &base);
        printf("\nDigite o valor do expoente: ");
        scanf("%f", &exp);

        resul = pow(base, exp);

        printf("%.0f elevado a %.0f fica = %.2f", base, exp, resul);
        break;

    case 'r':

        printf("\nNeste calculo utilizamos apenas 2 numeros, indice e radicando\nDigite um numero para o radicando: ");
        scanf("%f", &radicando);
        printf("Digite um numero para o indice: ");
        scanf("%f", &indice);

        if (indice == 0)
        {

            printf("Qualquer numero elevado a zero sempre vai ter como resultado 1!");
        }

        raiz = pow(radicando, 1.0 / indice);

        printf("A raiz de indice %.0f de radicando %.0f fica = %.2lf\n", indice, radicando, raiz);
        break;

    default:
        printf("ERRO!!!\n");
        break;
    }

    system("pause");
    return 0;
}