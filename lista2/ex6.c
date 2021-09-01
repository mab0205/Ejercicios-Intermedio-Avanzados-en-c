#include<stdio.h>

/*Escreva uma funcao recursiva que recebe um inteiro positivo N e retorna a
quantidade de dıgitos de N. Como exemplo, para N = 475, a funcao deve
retornar 3.*/

int quatidade(int num){
  if (num < 10) return 1;
  return 1 + quatidade(num / 10);
}

int main(int argc, char const *argv[])
{
 printf("%d",quatidade(34512));
  return 0;
}

















