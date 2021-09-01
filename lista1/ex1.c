#include <stdio.h>
#include <string.h>
#define MAX 50

/*Escreva um programa em C que le do usuario um inteiro N seguido de
N inteiros, e preenche um vetor de tamanho N com os inteiros lidos. Em
seguida, determine e imprima ao usuario a soma dos elementos no vetor.
*/
struct numero{
	int N;
    int v[MAX];
};

int main(){
int sum=0, i;
struct numero inteiro;


scanf("%d",&inteiro.N);
for ( i = 1; i <= inteiro.N; i++)
{
scanf("%d",&inteiro.v[i]);
sum=sum+inteiro.v[i];
}


printf("%d\n",inteiro.N);
printf("%d\n",sum);
	for (i = 1; i <= inteiro.N; i++){

printf("%d",inteiro.v[i]);
}


return 0;
}
