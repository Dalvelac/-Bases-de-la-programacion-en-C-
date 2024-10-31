#include <iostream>

int coches;

void cochecitos() {
    if(coches == 0)
    throw(std::runtime_error("No tienes coches, prueba otra vez"));
}

int main() {

    std::cout << "Cuantos coches tienes? ";
    std::cin >> coches;

    try {
        cochecitos();
    } catch (const std::runtime_error& e) {
        std::cout << "No tienes coches, prueba a poner un numero que no sea 0.";
        return 0;
    }

    std::cout << "Tienes " << coches << " coches.";
}