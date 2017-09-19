//
// Created by nelon on 19/9/2017.
//

#include "ColaPrioridad.h"

template<class T>
ColaPrioridad<T>::ColaPrioridad() : frente(NULL), fondo(NULL){}

template<class T>
bool ColaPrioridad<T>::esVacia() {
    return (frente == NULL);
}

template<class T>
T ColaPrioridad<T>::desencolar() {
    if (esVacia())
        throw 1;

    T aux = frente->getDato().dato;
    Nodo<DP> *tmp = frente;
    frente = frente->getNext();
    delete tmp;
    return aux;
}

template <class T>
Nodo<ColaPrioridad::DP> * ColaPrioridad<T>::ultimaPrioridad(Nodo<DP> *cola, int prioridad) {
    Nodo<DP> *recorrer = cola;
    Nodo<DP> *anterior;

    while (recorrer != NULL && recorrer->getDato().prioridad <= prioridad) {
        anterior = recorrer;
        recorrer = recorrer->getNext();
    }

    delete recorrer;
    return anterior;
}

template<class T>
void ColaPrioridad<T>::encolar(T d, int p) {
    DP tmp = {d, p};
    Nodo<DP> *nuevo = new Nodo<DP>(tmp);

    if (esVacia()) {
        frente = nuevo;
        fondo = nuevo;
    } else {
        if (frente->getDato().prioridad > p) {
            nuevo->setNext(frente);
            frente = nuevo;
        } else {
            Nodo<DP> *aux = ultimaPrioridad(this->frente, p);
            nuevo->setNext(aux->getNext());
            aux->setNext(nuevo);
            delete aux;
        }
    }
}

template<class T>
T ColaPrioridad<T>::verFrente() {
    if (esVacia())
        throw 1;
    return frente->getDato().dato;
}