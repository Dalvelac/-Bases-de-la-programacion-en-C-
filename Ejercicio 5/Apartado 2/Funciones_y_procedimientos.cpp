#include <iostream>

void procedimiento() {
    int a = 5;
    int b = 10;

    std::cout << "La suma de " << a << " y " << b << " es " << a + b << std::endl;
}

int suma (int a, int b) {
    return a + b;
}

int main() {
    procedimiento();
    int resultado = suma(7, 3);
    std::cout << "La suma de 7 y 3 es " << resultado << std::endl;

}