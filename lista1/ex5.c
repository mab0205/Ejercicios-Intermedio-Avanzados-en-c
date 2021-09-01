#include <stdio.h>
#include <string.h>
#define MAX 50

/*Utilizando a funcao criada no exercıcio anterior, crie uma funcao que recebe
um vetor e seu tamanho e retorna 1 (resp. 0) se o vetor e (resp. nao e)
palindrome. Um vetor e palindrome se pode ser lido da mesma forma da
esquerda para a direita e da direita para a esquerda. Por exemplo, [4, 2, 2, 4]
e palindrome, mas [4, 2, 4, 2] nao e. Obs: a funcao nao deve alterar o vetor
recebido*/

struct numero {
    int N;
    char s[MAX];
}palabra;


int inverteVetor(char arr[], int num)
{
    char v[MAX], caracter; 
    int i;

    strcpy(v,arr);

    for(i = 0; i < num; i++)
    {
        v[i]=arr[((num-1)-i)];		       
	}

    if(strcmp(v,arr) == 0) {
        	return 1;
        }else{
            return 0;
        }
    
}


int main(int argc, char const *argv[])
{
    int num, i, pali;

    scanf("%s", &palabra.s);
    num = strlen(palabra.s);

    pali=inverteVetor(palabra.s, num);
    
    printf("%d",pali);

    return 0;
}
