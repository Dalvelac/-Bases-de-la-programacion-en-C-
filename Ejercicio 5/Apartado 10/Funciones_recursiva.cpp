#include <iostream>

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {  // Caso base: F(0) = 0 y F(1) = 1
        return n;
    }
    // Llamada recursiva
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numero;

    std::cout << "Introduce un numero para calcular el término de Fibonacci: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Por favor introduce un numero no negativo." << std::endl;
    } else {
        int resultado = fibonacci(numero);
        std::cout << "El termino " << numero << " de la secuencia de Fibonacci es: " << resultado << std::endl;
    }

    return 0;
}
