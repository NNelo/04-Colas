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
#include "../Cola/Cola.h"

typedef struct {
    double monto_gastado;
    unsigned long cant_productos;
} D;

class FilaSupermercado {
private:
    ColaPrioridad<D> fila;
    unsigned int cantEmbarazadas;
    unsigned long cant_prod_total;
    double monto_total;

public:
    FilaSupermercado() : cantEmbarazadas(0), monto_total(0), cant_prod_total(0) {}

    ~FilaSupermercado() {}

    void ingresar_cliente(Cola<double> compras, bool embarazada) {
        unsigned long cant = 0;
        double monto = 0;
        while (!compras.esVacia()) {
            monto += compras.desencolar();
            cant++;
        }
        if (embarazada)
            cantEmbarazadas++;
        monto_total += monto;
        cant_prod_total += cant;
        fila.encolar({monto, cant}, !embarazada);            // si esta embarazada bool = true = 1       Prioridad = 0
    }

    D atender_cliente() {
        if (fila.esVacia())
            throw -1;
        return fila.desencolar();
    }

    unsigned int getCantEmbarazadas() {
        return cantEmbarazadas;
    }

    unsigned long getCant_prod_total() {
        return cant_prod_total;
    }

    double getMonto_total() {
        return monto_total;
    }
};


#endif //INC_04_COLA_FILASUPERMERCADO_H
