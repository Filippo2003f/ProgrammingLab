#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int info;
    struct nodo * next;
};

typedef struct nodo elementoLista;
typedef elementoLista * lista;

lista crea_lista()
{
    lista a = NULL;
    int n;
    printf("Inserisci un numero: ");
    scanf("%d\n", &n);
    if(n == -1)
    { 
        return a;
    }
    elementoLista * nuovo = malloc(sizeof(elementoLista));
    nuovo -> info = n;
    nuovo -> next = NULL;
    a = nuovo;
    elementoLista * coda;
    coda = nuovo;
    printf("Inerisci un numero: ");
    scanf("%d\n", &n);
    while(n != -1)
    {
        nuovo = malloc(sizeof(elementoLista));
        nuovo -> info = n;
        nuovo -> next = NULL;
        coda -> next = nuovo;
        coda = nuovo;
        printf("Inerisci un numero: ");
        scanf("%d\n", &n);
    }
    return a;
}

void stampa_lista(lista a)
{
    if(a == NULL) return;
    printf("%d\n", a -> info);
    stampa_lista(a -> next);
}

void stampa_lista_it(lista a)
{
    while(a != NULL)
    {
        printf("%d\n", a -> info);
        a = a -> next;
    }
}

void main()
{
    lista a = crea_lista();
    stampa_lista(a);
}