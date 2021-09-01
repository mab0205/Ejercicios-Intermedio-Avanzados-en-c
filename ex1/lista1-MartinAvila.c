#include<stdio.h>
#include<stdlib.h>

typedef struct Nodo {
    int info;
    struct Nodo* prox;
}nodo;

nodo* insere(nodo* lista, int x) {
    if (lista == NULL) {
        nodo* novo = (nodo*)malloc(sizeof(nodo));
        novo->info = x;
        novo->prox = NULL;
        lista = novo;
        return lista;
    }

    lista->prox = insere(lista->prox, x);
    return lista;
}

void imprime(nodo* lista) {
    while (lista != NULL) {
        printf("%d ", lista->info);
        lista = lista->prox;
    }
    printf("\n");
}

void reverse(nodo* lista) {
    if (lista == NULL) return;
    reverse(lista->prox);
    printf("%d ", lista->info);
}

int main(int argc, char const* argv[])
{
    int x;
    nodo* lista = NULL; //lista vazia

    while (x != -1) {
        scanf("%d", &x);
        if (x != -1) lista = insere(lista, x);
    }

    imprime(lista);
    reverse(lista);
    printf("\n");


    return 0;
}
