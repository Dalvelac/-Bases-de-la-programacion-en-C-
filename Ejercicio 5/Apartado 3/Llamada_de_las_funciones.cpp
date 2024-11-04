#include <iostream>

void procedimiento(int a, int b) {
    std::cout << "La suma de " << a << " y " << b << " es " << a + b << std::endl;
}

void multiplicacion(int a, int b) {
    std::cout << "El producto de " << a << " y " << b << " es " << a * b << std::endl;
}

void division(int a, int b) {
    if (b != 0) {
        std::cout << "La division de " << a << " entre " << b << " es " << static_cast<float>(a) / b << std::endl;
    } else {
        std::cout << "Error: Division entre cero no permitida." << std::endl;
    }
}

int main() {
    int a = 5;
    int b = 10;

    procedimiento(a, b);
    multiplicacion(a, b);
    division(a, b);

    return 0;
}
