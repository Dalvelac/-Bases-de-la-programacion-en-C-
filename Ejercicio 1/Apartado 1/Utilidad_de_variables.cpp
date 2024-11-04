#include <iostream>

int main() {

    std::string nombre;
    int edad;

    std::cout << "Como te llamas? ";
    std::cin >> nombre;

    std::cout << "Que edad tienes? ";
    std::cin >> edad;

    std::cout << "Hola, " << nombre << ". El año que viene tendrás " << edad + 1 << " años." << std::endl;

    return 0;
}