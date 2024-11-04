#include <iostream>

int main() {
    int numero;

    while (true) {
        std::cout << "Ingresa un numero (0 para salir): ";
        std::cin >> numero;
        if (numero == 0) {
            std::cout << "Se ha detectado un 0, saliendo del bucle." << std::endl;
            break;
        }
    std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
    for (int i = 1; i <= 12; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

        std::cout << "Has ingresado el numero: " << numero << std::endl;
    }

    std::cout << "Programa finalizado." << std::endl;
    return 0;
}
