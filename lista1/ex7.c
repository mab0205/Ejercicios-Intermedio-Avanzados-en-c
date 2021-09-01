#include <stdio.h>
#include <string.h>
#define MAX 50

/*Escreva uma funcao (void) que recebe um vetor v e seu tamanho inteiro N
e ordena o vetor recebido pelo SelectionSort 1. Este algoritmo consiste em
determinar o menor elemento do vetor e coloca-lo em sua primeira posicao.
Em seguida, determina o segundo menor elemento do vetor e o coloca na
segunda posiçao, e assim sucessivamente*/

void inverteVetor(int primeira[], int n){
    int c=0, d=0, position=0, t=0;

 for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (primeira[position] > primeira[d])
        position = d;
    }
    if (position != c)
    {
      t = primeira[c];
      primeira[c] = primeira[position];
      primeira[position] = t;
    }
  }
}

int main(int argc, char const *argv[])
{
    int num = 0;
    int integerArray[] = { 63, 767, 8, 53, 32, 14, 78, 1222, 0, 1, 2, 3, 4, 5, 6 };
    num = sizeof(integerArray)/sizeof(*integerArray);
    printf("%d\n",num);

    inverteVetor(integerArray, num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\t",integerArray[i]);
    }
    return 0;
}

