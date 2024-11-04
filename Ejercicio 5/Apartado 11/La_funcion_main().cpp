#include <iostream>

int main() {
    // Código del programa
    return 0;
}

int main(int argc, char* argv[]) {
    std::cout << "Número de argumentos: " << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
    }
    return 0;
}

int main(int argc, char** argv) {
    // Código del programa
    return 0;
}


int main(int argc, char* argv[], char* envp[]) {
    // Código del programa
    return 0;
}


void main() {
    // Código del programa
}
