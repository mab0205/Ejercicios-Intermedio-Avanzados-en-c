#include <stdio.h>
#include <string.h>
#define MAX 50
//* Escreva uma funcao que recebe uma string char s[] e retorna seu tamanho. 
//* Lembre que toda string e terminada pelo byte ’\0’,
//* e que este nao deve ser contado em seu tamanho.

struct numero {
    int N;
    char s[MAX];
}palabra;



int tamanho(char arr[])
{
    int num;
    num = strlen(arr);

    return num;
}



int main()
{
    scanf("%s", &palabra.s);

    palabra.N = tamanho(palabra.s);

    printf("tamanho: %d", palabra.N);


    return 0;
}









