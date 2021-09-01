#include<stdio.h>
#include <stdlib.h>
#include"biblioteca.h"

#define MAX 30

//Pilha>>>> LIFO 

/*
//Uso de bibliotecas biblioteca.h y biblioteca.c
int main(int argc, char const *argv[])
{
    int v[MAX], n=0;
    int i;

    //insere
    insere(v,&n,42);
    insere(v,&n,10);

    //busca
    if(busca(v,n,42)==1)
        printf("encontrei\n");

    return 0;
}
*/

//pilha estatica
#define MAX 30

typedef struct {
    int v[MAX]; //vector para almacenar los datos 
    int topo; // posicao do topo da pilha, inicialmente -1
} Pilha;

Pilha* cria_pilha() {
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

int vazia(Pilha *p) {
    return (p->topo == -1) ? 1 : 0;
}

void push(Pilha *p, int x) {
   /* p->topo++;
    p->v[p->topo] = x; // e se estiver cheia?
    printf("%d pushed to stack\n", x);*/
     //if (isFull(p))
        //return;
    p->v[++p->topo] = x;
    printf("%d pushed to stack\n", x);
}

int pop(Pilha *p) {
    int t = p->v[p->topo]; // e se estiver vazia?
    p->topo--;
    return t;
}


int main(int argc, char const *argv[])
{
    Pilha *p = cria_pilha(1);

    push(p,408);
    push(p,408);
    printf("%d popped from stack\n", pop(p));
    push(p,408);
    printf("%d popped from stack\n", pop(p));
    
    return 0;
}



