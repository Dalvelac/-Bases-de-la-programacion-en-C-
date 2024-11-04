#include <iostream>
#include <string>

void func(int x, int y){
   std::cout << "El numero es: " << x << "+" << y << "= " << x + y << std::endl;
}

std::string func(std::string mensaje){

    return mensaje;

}

int main(){
    int x = 10;
    int y = 20;
    int respuesta;

    std::cout << "Cuanto es " << x << " + " << y << "?" << std::endl;
    std::cin >> respuesta;

    if (respuesta == (x + y)) {
        // Llama a func con un string y guarda el resultado en z
        std::string z = func("La respuesta es correcta");
        std::cout << z << std::endl;
    } else {
        std::cout << "La respuesta es incorrecta" << std::endl;
    }

    return 0;
}
