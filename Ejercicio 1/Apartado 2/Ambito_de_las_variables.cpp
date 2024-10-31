#include <iostream>

int edad; //Variable global

std::string nombre; //Variable global

int main() {
    std::string direccion; //Variable local

    std::cout << "Como te llamas? ";
    std::cin >> nombre;

    std::cout << "Que edad tienes? ";
    std::cin >> edad;

    std::cout << "Cual es tu direccion? ";
    std::cin >> direccion;

    std::cout << "Hola, " << nombre << ". El año que viene tendrás " << edad + 1 << " años." << "Vives en " << direccion << std::endl;

}