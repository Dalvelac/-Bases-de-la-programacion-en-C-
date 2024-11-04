#include <iostream>
#include "funciones.h"


int main() {

    std::string nombre;

    std::cout << "Como te llamas?";
    std::cin >> nombre;

    saludar(nombre);

}
