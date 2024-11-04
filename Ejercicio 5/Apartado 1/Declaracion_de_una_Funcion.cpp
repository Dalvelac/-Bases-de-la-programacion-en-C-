#include <iostream>

int a = 5;
int b = 10;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "La suma de " << a << " y " << b << " es " << suma(a, b) << std::endl;
    return 0;
}