//
// Created by Nelo on 21/10/2017.
//

/*
      En un supermercado, se tiene sólo una caja habilitada para que los clientes puedan pagar
    sus compras. La caja tiene prioridad para mujeres embarazadas. Dada esta situación, se
    pide que se implemente un sistema que calcule la cantidad de productos comprados por
    cada cliente y el monto total gastado, también la cantidad de embarazadas que accedieron a
    la cola.
 * */

#ifndef INC_04_COLA_FILASUPERMERCADO_H
#define INC_04_COLA_FILASUPERMERCADO_H

#include "../Ej-03/ColaPrioridad.h"
#include "Lista.h"

class FilaSupermercado {
private:
    ColaPrioridad<Lista<double>> fila;
    unsigned int cantEmbarazadas;
    double pre


public:
    FilaSupermercado() {

    }
};


#endif //INC_04_COLA_FILASUPERMERCADO_H
