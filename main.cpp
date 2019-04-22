#include <iostream>
#include "funciones.h"

using namespace std;

//Programa principal
int main()
{
    Nodo *lista = NULL;

    crearLista(lista);
    mostrarLista(lista);

    ordenarBurbuja(lista);
    mostrarLista(lista);


    return 0;
}




