#include<stdio.h>

/* Escreva uma funcao recursiva que calcula o fatorial de um dado inteiro N.
Lembre-se que 0! = 1 e que N! = N × (N − 1)!.*/

 int fatorial(int n){
     if (n==0) return 1;
      int x = fatorial(n-1);
     return n*x;
 }

int main(int argc, char const *argv[])
{
    printf("%d", fatorial(3));
    return 0;
}




