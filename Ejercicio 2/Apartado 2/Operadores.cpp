#include <iostream>
#include <cmath>

int main() {

    int a, b, c;

    // Operadores aritmeticos

    std::cout << "Introduce el valor de a: ";
    std::cin >> a;

    std::cout << "Introduce el valor de b: ";
    std::cin >> b;

    std::cout << "Introduce el valor de c: ";
    std::cin >> c;

    int suma = a + b + c ;
    std::cout << "La suma de los tres números es: " << suma << std::endl;

    int multiplicacion = a * b * c;
    std::cout << "La multiplicación de los tres números es: " << multiplicacion << std::endl;

    int resta = a - b - c;
    std::cout << "La resta de los tres números es: " << resta << std::endl;

    int division = a / b / c;
    std::cout << "La división de los tres números es: " << division << std::endl;

    int porcentaje = a % b % c;
    std::cout << "El resultado de la operación de módulo es: " << porcentaje << std::endl;

    // Operadores de comparacion

    int comparacion = a == b;
    std::cout << "La comparación de igualdad entre a y b es: " << comparacion << std::endl;

    int comparacion2 = a != b;
    std::cout << "La comparación de desigualdad entre a y b es: " << comparacion2 << std::endl;

    int comparacion3 = a > b;
    std::cout << "La comparación de mayor que entre a y b es: " << comparacion3 << std::endl;

    int comparacion4 = a < b;
    std::cout << "La comparación de menor que entre a y b es: " << comparacion4 << std::endl;

    int comparacion5 = a >= b;
    std::cout << "La comparación de mayor o igual que entre a y b es: " << comparacion5 << std::endl;

    int comparacion6 = a <= b;
    std::cout << "La comparación de menor o igual que entre a y b es: " << comparacion6 << std::endl;

    // Operadores logicos

    int logico = a && b;
    std::cout << "El resultado de la operación lógica AND entre a y b es: " << logico << std::endl;

    int logico2 = a || b;
    std::cout << "El resultado de la operación lógica OR entre a y b es: " << logico2 << std::endl;

    int logico3 = !a;
    std::cout << "El resultado de la operación lógica NOT de a es: " << logico3 << std::endl;


}