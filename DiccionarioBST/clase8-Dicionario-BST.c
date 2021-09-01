#include <stdio.h>
#include <stdlib.h>
 
typedef struct nodo{
    int chave;
    struct nodo *esq, *dir;
}nodo;
 
// nuevo BSt
 nodo* newNode(int item)
{
    nodo* temp = (nodo*)malloc(sizeof(nodo));
    temp->chave = item;
    temp->esq = temp->dir = NULL;
    return temp;
}
 
// funcion para poner en orden el Bst
void inorder(nodo* raiz)
{
    if (raiz!= NULL) {
        inorder(raiz->esq);
        printf("%d \n", raiz->chave);
        inorder(raiz->dir);
    }
}
void preorder(nodo* raiz)
{
    if (raiz == NULL)return;
 
     printf("%d ", raiz->chave);
    preorder(raiz->esq);
    preorder(raiz->dir);
}
 
/* Insertar un nuevo nodo de tipo chave en el arbol */
 nodo* insert(nodo* raiz, int chave)
{
    if (raiz == NULL)
        return newNode(chave);

    if (chave < raiz->chave) //si el numero es menor al primer elemento ingresado
        raiz->esq = insert(raiz->esq, chave);
    else if (chave > raiz->chave)//si el numero es mayor al primer elemento ingresado
        raiz->dir = insert(raiz->dir, chave);
    return raiz;
}
 
int busca(nodo *raiz, int x){

if (raiz == NULL)
        return printf("%d nao encontrado",x);

    if (raiz->chave == x) //si el ultimo numero es igual al numero que se quiere buscar
        return printf("%d encontrado",x);
    else if (x < raiz->chave)//si el numero que se quiere buscar es menor al ultimo numero ingresado
        return busca(raiz->esq, x);
        else return busca(raiz->dir, x);
}


int main()
{

    nodo* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    // ordena los numeros estructurados en el arbol 
    inorder(root);
    busca(root, 75);

    return 0;
}








