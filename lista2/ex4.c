#include<stdio.h>

/*  Escreva uma funcao recursiva que recebe N e P e determina 
(combinacao de N tomado P a P), sabendo que:
.*/

long long int combinacao(int n, int p) {
    if (p == 0 || p == n) return 1;
    return combinacao(n - 1, p - 1) + combinacao(n - 1, p);
}

int main(int argc, char* argv[]) {
    printf("%lld\n", combinacao(10, 2));

    return 0;
}
