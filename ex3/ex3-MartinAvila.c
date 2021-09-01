#include <stdio.h>
#include <stdlib.h>

#define MAX 100
//BST
typedef struct nodo {
    int chave;
    struct nodo* esq, * dir;
}nodo;

// nuevo BSt
nodo* bst(int x) {
    nodo* novo = (nodo*)malloc(sizeof(nodo));
    novo->chave = x;
    novo->esq = novo->dir = NULL;
    return novo;
}

//insere un nuevo nodo de tipo chave en el arbol 
nodo* insere(nodo* raiz, int chave) {
    if (raiz == NULL)
        return bst(chave);  //se no existe bst se crea uno nuevo                                             

    if (chave < raiz->chave)  //si el numero es menor al primer elemento ingresado
        raiz->esq = insere(raiz->esq, chave);
    else if (chave > raiz->chave)//si el numero es mayor al primer elemento ingresado
        raiz->dir = insere(raiz->dir, chave);
    return raiz;
}

int busca(nodo* raiz, int x) {
    if (raiz == NULL)
        return printf("%d nao encontrado", x);

    if (raiz->chave == x) //si el ultimo numero es igual al numero que se quiere buscar
        return printf("%d encontrado", x);
    else if (x < raiz->chave) //si el numero que se quiere buscar es menor al ultimo numero ingresado
        return busca(raiz->esq, x);
    else return busca(raiz->dir, x);
}

// funcion para imprimir en orden el Bst
void inorder(nodo* raiz) {
    if (raiz != NULL) {
        inorder(raiz->esq);
        printf("%d ", raiz->chave);
        inorder(raiz->dir);
    }
}
// funcion para imprimir en preorden el Bst
void preorder(nodo* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->chave);
        preorder(raiz->esq);
        preorder(raiz->dir);
    }
}

int main() {
    int x, numbusc[MAX], i = 0, aux = 0, cont = 0;
    nodo* raiz = NULL;

    scanf("%d", &x);
    raiz = insere(raiz, x);

    while (x != -1) {
        scanf("%d", &x);
        if (x != -1) insere(raiz, x);
    }

    while (aux != -1) {
        scanf("%d", &aux);

        if (aux != -1) {
            numbusc[i] = aux;
            i++;
            cont++;
        }
    }
    i = 0;
    while (i < cont) {
        busca(raiz, numbusc[i]);
        printf("\n");
        i++;
    }

    // ordena los numeros estructurados en el arbol 
    preorder(raiz); printf("\n");
    inorder(raiz); printf("\n");

    return 0;
}
