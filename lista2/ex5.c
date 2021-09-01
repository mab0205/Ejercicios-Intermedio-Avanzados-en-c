#include<stdio.h>

/* Escreva uma funcao recursiva que recebe um inteiro N e determina 
o Nesimo numero da sequencia de Fibonacci FN .
 A sequencia e dada recursivamente com F0 = 0, F1 = 1 e FN = FN−1 + FN−2. */

//SECUENCIA FIBONACCI
// FIB:0,1,1,2,3,5,8,13,21

int fib(int n){
     if (n == 0 || n == 1) return n;
     return fib(n-1) + fib(n-2);
 }

int main(int argc, char const *argv[])
{
    printf("%d", fib(8));
    return 0;
}
