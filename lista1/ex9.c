#include <stdio.h>
#define MAX 50

/*
Escreva uma funcao que recebe dois vetores a e b de mesmo tamanho N, e
retorna o produto interno de ambos os vetores. O produto interno e definido
por a0b0 + a1b1 + ... + aN−1bN−1.
*/

struct numero {
    int N;
    int s[MAX];
    int v[MAX];
}palabra;


int ProdutoInterno(int primeiro[], int segundo[], int num)
{
    int i, j;
    char aux1 = 0;

    for (i = 0; i < num; i++)
    {
        aux1 += (primeiro[i] * segundo[i]);
    }

    return aux1;
}

int main(int argc, char const* argv[])
{
    int printerno, i, count = 4;

    printf("entre o primero vetor");

    for (i = 0; i < count; i++)
    {
        scanf("%d", &palabra.s[i]);
    }

    printf("entre o segundo vetor");
    for (i = 0; i < count; i++)
    {
        scanf("%d", &palabra.v[i]);
    }

    printerno = ProdutoInterno(palabra.s, palabra.v, count);

    printf("%d", printerno);

    return 0;
}
