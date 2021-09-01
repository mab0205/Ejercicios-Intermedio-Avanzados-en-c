#include <stdio.h>
#include <string.h>
#define MAX 50

/*Escreva uma funcao (void) que recebe um vetor v e seu tamanho inteiro N
e inverte a ordem de seus elementos.*/

struct numero {
    int N;
    char s[MAX];
}palabra;


void inverteVetor(char arr[], int num)
{
    char v[MAX], caracter; 
    int i;

    strcpy(v,arr);

    for(i = 0; i < num; i++)
    {
        arr[i]=v[((num-1)-i)];		       
	}
    
}


int main(int argc, char const *argv[])
{
    int num, i;

    scanf("%s", &palabra.s);
    num = strlen(palabra.s);

    inverteVetor(palabra.s, num);
    printf("%s\n", palabra.s); 

    return 0;
}















