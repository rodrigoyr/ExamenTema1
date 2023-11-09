#include <iostream>
#include <string>

int division(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::string("Error: División por cero no permitida.");
    }
    return numerador / denominador;
}

int main() {
    int numerador, denominador;

    std::cout << "Ingrese el numerador: ";
    std::cin >> numerador;

    std::cout << "Ingrese el denominador: ";
    std::cin >> denominador;

    try {
        int resultado = division(numerador, denominador);
        std::cout << "Resultado de la división: " << resultado << std::endl;
    } catch (const std::string &excepcion) {
        std::cerr << "Excepción atrapada: " << excepcion << std::endl;
    }

    return 0;
}
