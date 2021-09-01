#include<stdio.h>
#include<math.h>

/*Escreva uma fun¸c˜ao recursiva imprimeDigitos(int N), 
que recebe um inteiro positivo N e imprime os d´ıgitos de N, um por linha, 
do mais significativo ao menos significativo. Como exemplo, a chamada imprimeDigitosInv(123)
deve imprimir*/

void imprimeDigitosInv(int n){
if (n < 10) {
        printf("%d\n", n);
        return ;
    }
   int cont = (int)log10(n);
   int aux = n*pow(10, -cont);
   printf("%d\n", aux);
    imprimeDigitosInv(n % (int)pow(10, cont));
}

int main(int argc, char const *argv[])
{
   imprimeDigitosInv(2345);
    return 0;
}
