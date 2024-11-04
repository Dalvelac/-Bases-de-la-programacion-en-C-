#include <iostream>

int edad;

bool mayordeedad;

int main() {

    std::cout << "Que edad tienes? ";
    std::cin >> edad;
    if (edad >= 18) {
        mayordeedad = true;
    } else {
        mayordeedad = false;
    }

    std::cout << "Hola" << ", eres un" << (mayordeedad? " mayor de edad." : " menor de edad.") << std::endl;

}
