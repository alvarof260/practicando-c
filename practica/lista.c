#include <stdio.h>
#include <stdlib.h>
typedef int Item;

typedef struct Tnodo
{
    Item dato;
    struct Tnodo *Siguiente;
} Tnodo;

void crearListaVacia(Tnodo *start);

int main()
{
    Tnodo *start;
    crearListaVacia(start);
    Tnodo *nuevoNodo = malloc(sizeof(Tnodo));
    nuevoNodo->dato = 25;
    nuevoNodo->Siguiente = start;
    start = nuevoNodo;
    Tnodo *nuevoNodo2 = malloc(sizeof(Tnodo));
    nuevoNodo2->dato = 40;
    nuevoNodo2->Siguiente = start;
    start = nuevoNodo2;
    Tnodo *aux = start;
    while (aux != NULL)
    {
        printf("el dato del nodo: %d\n", aux->dato);
        aux = aux->Siguiente;
    }

    return 0;
}

void crearListaVacia(Tnodo *start)
{
    start = NULL;
}