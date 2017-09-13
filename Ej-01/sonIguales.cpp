//
// Created by alumno on 13/09/17.
//

#include "sonIguales.h"



//Diseñe un programa que sea capaz de leer dos colas y mediante un mensaje indicar si son
//iguales. Nota: los elementos constitutivos de las colas son caracteres.

bool sonIguales(Cola<char> *A, Cola<char> *B){
    if(A->esVacia() && B->esVacia())
        return true;
    if(A->desencolar() == B->desencolar())
        return sonIguales(A,B);

    return false;
}
