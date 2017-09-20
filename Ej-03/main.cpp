#include <iostream>
#include <string>
#include "../Cola/Cola.h"
#include "ColaPrioridad.h"

using namespace std;

int main() {
    ColaPrioridad<string> colaP;
    cout << colaP.esVacia();
    return 0;
}