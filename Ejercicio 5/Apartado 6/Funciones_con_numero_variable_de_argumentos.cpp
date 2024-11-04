#include <iostream>
#include <cstdarg>

// Función para sumar un número variable de argumentos
int sumar(int cantidad, ...) {
    va_list args;
    va_start(args, cantidad);

    int suma = 0;
    for (int i = 0; i < cantidad; ++i) {
        suma += va_arg(args, int);
    }

    va_end(args);
    return suma;
}

int main() {
    int cantidad;

    std::cout << "Introduzca el numero de valores que desea sumar: ";
    std::cin >> cantidad;


    if (cantidad <= 0) {
        std::cout << "El numero de valores debe ser positivo." << std::endl;
        return 1;
    }

    if (cantidad > 3) {
        std::cout << "Solo se pueden sumar hasta 3 valores." << std::endl;
        return 1;
    }

    int* numeros = new int[cantidad];
    for (int i = 0; i < cantidad; ++i) {
        std::cout << "Introduce el numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    int resultado = sumar(cantidad, numeros[0], numeros[1], numeros[2]);

    std::cout << "El resultado de la suma es: " << resultado << std::endl;
}