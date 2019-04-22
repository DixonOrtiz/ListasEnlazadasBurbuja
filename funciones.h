#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>

using namespace std;

//Declaraciones y definición de struct

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void crearNodo(Nodo *&, int);
void mostrarNodo(Nodo *);

void crearLista(Nodo *&);
void mostrarLista(Nodo *);
void agregarNodoFinal(Nodo *&);
void agregarNodoPrincipio(Nodo *&);
int largoLista(Nodo *);
void ordenarBurbuja(Nodo *&);



#endif // FUNCIONES_H_INCLUDED
