#include <iostream>

int edad;
bool esMayorDeEdad;
double altura;
char inicial;
std::string nombre;

int main() {

    std::cout << "Como te llamas? ";
    std::cin >> nombre;

    std::cout << "Que edad tienes? ";
    std::cin >> edad;
    if(edad >=18){
        esMayorDeEdad = false;
    } else {
        esMayorDeEdad = true;
    }

    std::cout << "Cual es tu altura? ";
    std::cin >> altura;

    std::cout << "Cuales son tus iniciales?";
    std::cin >> inicial;

    std::cout << "Hola " << nombre << ", tienes " << edad << "años" << " y eres" << (esMayorDeEdad ? " mayor" : " menor") << " de edad. Mides " << altura << " metros y tus iniciales son " << inicial << std::endl;
}