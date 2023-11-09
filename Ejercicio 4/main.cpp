#include <iostream>
#include <string>

int division(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::string("Error: Division por cero no permitida.");
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
        std::cout << "Resultado de la division: " << resultado << std::endl;
    } catch (const std::string &excepcion) {
        std::cerr << "Excepcion atrapada: " << excepcion << std::endl;
    }

    return 0;
}
