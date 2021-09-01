#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int info;
    struct nodo* prox;
} nodo;

typedef struct Pilha {
    struct nodo* topo;
}Pilha;

Pilha* cria_pilha() {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int vazia(Pilha* p) {
    return p->topo == NULL ? 1 : 0;
}

void push(Pilha* p, int x) {
    nodo* novo = (nodo*)malloc(sizeof(nodo));
    novo->info = x;
    novo->prox = p->topo;
    p->topo = novo;
    printf("%d pushed to stack\n", x);
}

int pop(Pilha* p) {
    int aux = p->topo->info;
    nodo* prox = p->topo->prox;
    free(p->topo);
    p->topo = prox;
    return aux;
}


int main(int argc, char const* argv[])
{
    Pilha* p = cria_pilha();

    push(p, 16);
    push(p, 43);
    printf("%d popped from stack\n", pop(p));
    push(p, 10);
    printf("%d popped from stack\n", pop(p));
    printf("%d popped from stack\n", pop(p));

    return 0;
}
