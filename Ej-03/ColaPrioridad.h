//
// Created by nelon on 19/9/2017.
//

#ifndef INC_04_COLA_COLAPRIORIDAD_H
#define INC_04_COLA_COLAPRIORIDAD_H

#include "../Cola/Nodo.h"

template<class T>
class ColaPrioridad {
private:
    typedef struct  {
        T dato;
        int prioridad;
    }DP;

private:
    Nodo<DP> *frente;
    Nodo<DP> *fondo;

public:
    ColaPrioridad();

//    ~ColaPrioridad();

    void encolar(T, int);

    T desencolar();

    bool esVacia();

//    void vaciar();

    T verFrente();

};

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
            Nodo<DP> *recorrer = frente;
            Nodo<DP> *anterior;

            while (recorrer != NULL && recorrer->getDato().prioridad <= p) {
                anterior = recorrer;
                recorrer = recorrer->getNext();
            }

            nuevo = anterior;


            nuevo->setNext(nuevo->getNext());
            nuevo->setNext(nuevo);

            if(fondo->getNext() == nuevo)
                fondo = nuevo;
        }
    }
}

template<class T>
T ColaPrioridad<T>::verFrente() {
    if (esVacia())
        throw 1;
    return frente->getDato().dato;
}


#endif //INC_04_COLA_COLAPRIORIDAD_H