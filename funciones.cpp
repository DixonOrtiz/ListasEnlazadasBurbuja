#include "funciones.h"

//Definiciones

void crearNodo(Nodo *&nodo, int dato){
    nodo = new Nodo;
    nodo->dato = dato;
    nodo->siguiente = NULL;
}

void mostrarNodo(Nodo *nodo){
    cout << "El valor del nodo es: " << nodo->dato << endl;
    cout << "El nodo apunta a: " << nodo->siguiente << endl;
}

void crearLista(Nodo *&lista){
    Nodo *nodoAux, *punteroAux;
    int n, datoAux;

    nodoAux = NULL;
    punteroAux = NULL;

    cout << "Ingrese la cantidad de nodos de la lista: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << "Ingrese el valor del dato del " << i+1 << "° nodo: ";
            cin >>datoAux;

            crearNodo(nodoAux, datoAux);
            lista = nodoAux;
            punteroAux = lista;
            nodoAux = NULL;
            datoAux = 0;
        }

        if(i > 0){
            cout << "Ingrese el valor del dato del " << i+1 << "° nodo: ";
            cin >>datoAux;

            crearNodo(nodoAux, datoAux);
            punteroAux->siguiente = nodoAux;
            punteroAux = nodoAux;

            nodoAux = NULL;
            datoAux = 0;
        }
    }
}

void mostrarLista(Nodo *lista){

    if(lista == NULL){
        cout << "Lista vacía" << endl;
    }

    else{
        Nodo *punteroAux = lista;
        Nodo *punteroAux2 = punteroAux->siguiente;
        int con = 1;

        cout << "\nMostrar lista enlazada: ";
        while(punteroAux != NULL){

            if(punteroAux2 != NULL){
                cout << "|" << punteroAux->dato << "|->";
                punteroAux2 = punteroAux2->siguiente;
            }

            else{
                cout << "|" << punteroAux->dato << "|->NULL";
            }


            punteroAux = punteroAux->siguiente;
            con++;
        }
        cout << "\n";
    }
}

void agregarNodoFinal(Nodo *&lista){
    Nodo *nodoAux = NULL;
    Nodo *punteroAux = NULL;
    int valor;

    cout << "Ingrese el dato del nodo que desea agregar al final: ";
    cin >> valor;

    crearNodo(nodoAux, valor);

    if(lista == NULL){
        lista = nodoAux;
    }

    else{
        punteroAux = lista;

        while(punteroAux->siguiente != NULL){
            punteroAux = punteroAux->siguiente;
        }

        punteroAux->siguiente = nodoAux;
    }
}

void agregarNodoPrincipio(Nodo *&lista){
    Nodo *nodoAux = NULL;
    int dato;

    cout << "Ingrese el dato del nodo que desea agregar al principio: ";
    cin >> dato;
    crearNodo(nodoAux, dato);

    if(lista == NULL){
        lista = nodoAux;
    }

    else{
        nodoAux->siguiente = lista;
        lista = nodoAux;
    }
}

int largoLista(Nodo *lista){
    int con = 0;

    Nodo *punteroAux;

    if(lista == NULL){
        return 0;
    }

    else{
        con = 0;
        punteroAux = lista;

        while(punteroAux != NULL){
            con++;
            punteroAux = punteroAux->siguiente;
        }
    }

    return con;
}

void ordenarBurbuja(Nodo *&lista){

    if(lista != NULL){
        Nodo *punteroAux = NULL;
        Nodo *punteroAux2 = NULL;

        int largo = largoLista(lista);
        int contenedorAux = 0;
        int con = 0;

        while(con < largo){
            punteroAux = lista;
            punteroAux2 = punteroAux->siguiente;

            while(punteroAux2 != NULL){

                if(punteroAux->dato > punteroAux2->dato){
                    contenedorAux = punteroAux2->dato;
                    punteroAux2->dato = punteroAux->dato;
                    punteroAux->dato = contenedorAux;
                }
                punteroAux = punteroAux->siguiente;
                punteroAux2 = punteroAux2->siguiente;
            }

            con++;
        }
    }

    else
        cout << "La lista está vacía." << endl;
}
