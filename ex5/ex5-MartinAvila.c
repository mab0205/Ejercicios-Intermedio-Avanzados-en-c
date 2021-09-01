#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUM 11
#define MAX 100

int main(int argc, char const* argv[]) {
    char aux[MAX];
    int i = 0, base = 26, num = 0;
    unsigned long long int hash = 0;
    int  exponente = 1, chave[NUM];

    for (i = 0; i <= 10; i++) {
        chave[i] = 0;
    }

    scanf("%d", &num);

    for (int j = 0; j < num; j++) {

        scanf("%s", aux);
        hash = 0;
        for (i = 0; aux[i] != '\0'; i++) {
            exponente = pow(base, i);//26^i
            hash = hash + ((aux[i] - 'A') * exponente); 
        }

        if (aux[i] == '\0') {
            hash = hash % 11;
            chave[hash]++;
        }

    }
    for (i = 0; i <= 10; i++) printf("%d: %d chaves(s)\n", i, chave[i]);

    printf("\n\nEscolhi esta funcao hash porque espalha bem porque considera a posicao de cada letra da string nao so a lentra em si.\n\n");
    return 0;
}

