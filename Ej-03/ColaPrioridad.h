//
// Created by nelon on 19/9/2017.
//

#ifndef INC_04_COLA_COLAPRIORIDAD_H
#define INC_04_COLA_COLAPRIORIDAD_H

#include "../Cola/Nodo.h"

template<class T>
class ColaPrioridad {
private:
    struct DP {
        T dato;
        int prioridad;
    };

private:
    Nodo<DP> *frente;
    Nodo<DP> *fondo;

    Nodo<DP> *ultimaPrioridad(Nodo<DP> *, int);

public:
    ColaPrioridad();

    ~ColaPrioridad();

    void encolar(T, int);

    T desencolar();

    bool esVacia();

//    void vaciar();

    T verFrente();

};


#endif //INC_04_COLA_COLAPRIORIDAD_H