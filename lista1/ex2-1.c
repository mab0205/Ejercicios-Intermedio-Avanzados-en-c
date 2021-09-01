#include <stdio.h>
#include <string.h>
#define MAX 50

/* Escreva um programa em C que le do usuario uma sequencia arbritaria de
inteiros positivos e preenche um vetor com os inteiros. A sequencia termina
quando o usuario entrar com -1, que nao deve fazer parte do vetor. Por fim,
determine e imprima o maior e o menor elemento do vetor.
*/
struct numero{
	int N;
    int v[MAX];
};

void shellsort(int arr[], int num)
{
    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
    }
}


int main(){
int sum=0, i=0, num=0, count=0;
struct numero inteiro;

do
{
    scanf("%d", &num);
    if (num!=-1)
    {
       inteiro.v[i]=num;
       i++;
       count++;
    }
} while (num!=-1);

/*funcao ordenamento*/
shellsort(inteiro.v, count);

printf("%d\n",inteiro.v[0]);
printf("%d\n",inteiro.v[count-1]);

printf("%d\n",count);

}

























