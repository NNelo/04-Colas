//
// Created by alumno on 13/09/17.
//

#include "esPalidromo.h"
#include "../Cola/Pila.h"
#include "../Cola/Cola.h"

using namespace std;

bool esPalidromo(string txt) {
    Pila<char> pila;
    Cola<char> cola;

    for (int i = 0; i < txt.length(); ++i)
        if (txt[i] != ' ') {
            char t = tolower(txt[i]);
            if (t >= 'a' && t <= 'z') {
                cola.encolar(t);
                pila.push(t);
            }
        }

    while (!pila.esVacia() || !cola.esVacia()) {
        if (pila.pop() != cola.desencolar())
            return false;
    }

    return true;
}
