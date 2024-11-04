#include <iostream>

int main() {

    double numero;

    do {
        std::cout << "Introduce un numero: ";
        std::cin >> numero;

        if (numero == 0) {
            std::cout << "No se puede mostrar la tabla de multiplicar del 0." << std::endl;
        }
    } while (numero == 0);

    std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
    for (int i = 1; i <= 12; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}