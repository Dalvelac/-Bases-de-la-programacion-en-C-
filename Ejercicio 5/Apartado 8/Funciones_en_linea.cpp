#include <iostream>

class Punto {
public:
    // Función inline para establecer la posición con parámetros
    inline void setPosicion(int x, int y) {
        this->x = x;  // Asigna los valores a los miembros de la clase
        this->y = y;
    }

    // Funciones inline para obtener las coordenadas
    inline int getX() {
        return x;
    }

    inline int getY() {
        return y;
    }

private:
    int x, y;  // Miembros de la clase que representan las coordenadas
};

int main() {
    Punto p;
    p.setPosicion(10, 20);  // Llama a setPosicion con los argumentos correctos

    std::cout << "Las posiciones actuales del punto son: (" << p.getX() << ", " << p.getY() << ")" << std::endl;
    return 0;
}
