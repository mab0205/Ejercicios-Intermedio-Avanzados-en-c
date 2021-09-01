#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//pilha estatica
#define MAX 30

typedef struct {
    int v[MAX];
    int topo;
} Pilha;

Pilha* cria_pilha() {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

int vazia(Pilha* p) {
    return (p->topo == -1) ? 1 : 0;
}

void push(Pilha* p, int x) {
    p->topo++;
    p->v[p->topo] = x;
}

int pop(Pilha* p) {
    int t = p->v[p->topo];
    p->topo--;
    return t;
}

void free_pilha(Pilha* p) {
    free(p);
}

int main(int argc, char const* argv[])
{
    char par[MAX]; // char para parentesis
    int i, j = 0; //contador
    scanf("%s", par);
    //gets(par); 

    int count = strlen(par); //cantidad de caracteres
    Pilha* p = cria_pilha();

    for (i = 0; i < count; i++)
    {
        switch (par[i]) {
        case'(':
            push(p, par[i]);
            break;

        case '[':
            push(p, par[i]);
            break;

        case')':
            if (vazia(p) == 1)  break;
            else if (pop(p) == '(') {
                j++;
                break;
            }
            else {
                free_pilha(p);
                printf("nao\n");
                exit(0);
            }

        case ']':
            if (vazia(p) == 1)  break;
            else if (pop(p) == '[') {
                j++;
                break;
            }
            else {
                free_pilha(p);
                printf("nao\n");
                exit(0);
            }

        default:
            exit(0);
            break;
        }
    }

    if (vazia(p) == 0) {
        free_pilha(p);
        printf("nao\n");
        exit(0);
    }
    if (j == count / 2) {
        free_pilha(p);
        printf("sim");
    }
    else {
        free_pilha(p);
        printf("nao");
    }
    printf("\n");
    return 0;
}


