
#include <stdio.h>
#include <string.h>
#define MAX 50

/* Escreva uma funcao que recebe duas strings e retorna 1 se a primeira for
substring da segunda, ou 0 caso contrario. Como exemplo, “cia” ´e substring
de “bacias”, mas nao e substring de “bacibas”. */

struct numero {
    int N;
    char s[MAX];
    char v[MAX];
}palabra;


int inverteVetor(char primeira[], char segunda[])
{
    int i, j, count=0;
    char aux1, aux2;
    int num = strlen(primeira);
    int len = strlen(segunda);

    for(i = 0; i < num; i++){
    for(j = 0; j < len; j++){

        aux1=primeira[i];
        aux2=segunda[j];

         if (aux1==aux2) {
        	count++;
            break;
        } 	
        }            
	}

    if (count==num){
        return 1;
    }else{
        return 0;
    }

}

int main(int argc, char const *argv[])
{
    int substring;

    scanf("%s", &palabra.s);
    scanf("%s", &palabra.v);

    substring=inverteVetor(palabra.s, palabra.v);
    
    printf("%d",substring);

    return 0;
}
