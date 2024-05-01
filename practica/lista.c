#include <stdio.h>
#include <stdlib.h>
typedef int Item;

typedef struct Tnodo
{
    Item dato;
    struct Tnodo *Siguiente;
} Tnodo;

void crearListaVacia(Tnodo **start);
int esListaVacia(Tnodo *start);
void insertarNodo(Tnodo **start, Item dato);
void mostrarLista(Tnodo *start);
void borrarNodo(Tnodo **start);

int main()
{
    Tnodo *start;
    crearListaVacia(&start);
    esListaVacia(start) ? printf("Es lista vacia\n") : printf("No es lista vacia\n");
    insertarNodo(&start, 25);
    insertarNodo(&start, 40);
    insertarNodo(&start, 25);
    insertarNodo(&start, 50);
    insertarNodo(&start, 80);
    mostrarLista(start);
    borrarNodo(&start);
    mostrarLista(start);

    return 0;
}

void crearListaVacia(Tnodo **start)
{
    *start = NULL;
}

int esListaVacia(Tnodo *start)
{
    return start == NULL;
}

void insertarNodo(Tnodo **start, Item dato)
{
    Tnodo *nuevoNodo = malloc(sizeof(Tnodo));
    nuevoNodo->dato = dato;
    nuevoNodo->Siguiente = *start;
    *start = nuevoNodo;
}

void mostrarLista(Tnodo *start)
{
    Tnodo *aux = start;
    int num = 1;
    while (aux != NULL)
    {
        printf("Nodo %d: %d\n", num, aux->dato);
        num++;
        aux = aux->Siguiente;
    }
}

void borrarNodo(Tnodo **start)
{
    if (esListaVacia(*start))
        return;
    Tnodo *aux = *start;
    *start = (*start)->Siguiente;
    free(aux);
}