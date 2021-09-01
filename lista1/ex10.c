#include <stdio.h>
#include <string.h>
#define MAX 50

/*
Escreva uma funcao que recebe uma matriz A de tamanho N×M e determina
sua transposta AT
(de tamanho M × N).
*/


struct numero {
    int N;
    int s[MAX][MAX];
    int at[MAX][MAX];
}palabra;


void transposta(int primeiro[][MAX], int num) {
    int i, j;
    char aux1 = 0, aux2;

    for (j = 0; j < num; j++) {
        for (i = 0; i < num; i++) {
            palabra.at[j][i] = primeiro[i][j];
        }
    }


}

int main(int argc, char const* argv[]) {

    int printerno, i, j, count = 4;

    for (i = 0; i < count; i++) {
        for (j = 0; j < count; j++) {
            scanf("%d", &palabra.s[i][j]);
        }
    }

    transposta(palabra.s, count);

    for (i = 0; i < count; i++) {
        printf("\n");
        for (j = 0; j < count; j++) {
            printf("%d", palabra.at[i][j]);
        }
    }

    return 0;
}

