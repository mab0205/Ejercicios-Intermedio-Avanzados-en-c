#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//FILA  *FIFO (First in first out FIFO) primero que entra es el primero que sale
/*
typedef struct{
    int v[MAX];
    int inicio, fim;

}fila;

fila *cria_fila(){
    fila *f=(fila*)malloc (sizeof(fila));
    f->inicio=f->fim=0;

    return f;
}

int vazia (fila *f){
    if(f->inicio ==f->fim)
        return 1;
    return 0;
}

void push(fila *f, int x){
    f->v[f->fim]=x;
    f->fim= (f->fim+1)%MAX; //aritmetica modular reinicie el posicionamiento de cada numero en el mismo tamaño del vector
    printf("%d pushed to stack\n", x);
}

int pop (fila *f){
    int x=f->v[f->inicio];
    f->inicio=(f->inicio+1)%MAX;

    return x;
}

int main(int argc, char const *argv[])
{
    fila *p = cria_fila();

    push(p, 16);
    push(p, 43);
    printf("%d popped from stack\n", pop(p));
    push(p, 10);
    printf("%d popped from stack\n", pop(p));
    printf("%d popped from stack\n", pop(p));


    return 0;
}
*/

typedef struct nodo {
    int info;
    struct nodo* prox;
} nodo;

typedef struct fila {
    nodo* inicio;
    nodo* fim;
}fila;

fila* cria_fila() {
    fila* f = (fila*)malloc(sizeof(fila));
    f->inicio = f->fim = NULL;

    return f;
}

int vazia(fila* f) {
    if (f->inicio == NULL)
        return 1;

    return 0;
}

void push(fila* f, int x) {
    nodo* novo = (nodo*)malloc(sizeof(nodo)); //aritmetica modular reinicie el posicionamiento de cada numero en el mismo tamaño del vector 
    novo->info = x;
    novo->prox = NULL;
    if (f->fim != NULL)f->fim->prox = novo;

    f->fim = novo;
    if (f->inicio == NULL) f->inicio = novo;
}

int pop(fila* f) {
    int x = f->inicio->info;
    nodo* aux = f->inicio->prox;
    if (f->fim == f->inicio) f->fim = NULL;

    free(f->inicio);

    f->inicio = aux;
    return x;
}

int main(int argc, char const* argv[])
{
    fila* p = cria_fila();
    push(p, 16);
    push(p, 43);
    printf("%d popped from stack\n", pop(p));
    push(p, 10);
    printf("%d popped from stack\n", pop(p));
    printf("%d popped from stack\n", pop(p));


    return 0;
}




























