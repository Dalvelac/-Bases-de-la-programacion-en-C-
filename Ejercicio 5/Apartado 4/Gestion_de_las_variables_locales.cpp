#include <iostream>

class MiClase {
public:
    MiClase() {
        std::cout << "Objeto de MiClase creado." << std::endl;
    }

    ~MiClase() {
        std::cout << "Objeto de MiClase destruido." << std::endl;
    }
};

void funcionEjemplo() {
    std::cout << "Entrando a la funcion funcionEjemplo..." << std::endl;

    MiClase objeto;

    std::cout << "Usando el objeto de MiClase dentro de funcionEjemplo." << std::endl;

    std::cout << "Saliendo de la funcion funcionEjemplo (objeto de MiClase sera destruido ahora)..." << std::endl;
}

int main() {
    std::cout << "Llamando a funcionEjemplo desde main..." << std::endl;

    funcionEjemplo();

    std::cout << "De regreso en main despues de la llamada a funcionEjemplo." << std::endl;

    return 0;
}
