#include <iostream>
#include <string>

void mostrarMensaje(std::string mensaje = "Mensaje por defecto", int repeticiones = 1, bool saltoDeLinea = true) {
    for (int i = 0; i < repeticiones; ++i) { // Repite el mensaje el número de veces indicado. ++i es más eficiente que i++ porque no necesita crear una copia de i.
        std::cout << mensaje;
        if (saltoDeLinea) {
            std::cout << std::endl;
        }
    }
}

int main() {
    mostrarMensaje();

    mostrarMensaje("Hola!");

    mostrarMensaje("Hola!", 3);

    mostrarMensaje("Sin saltos de linea", 2, false);

    return 0;
}
