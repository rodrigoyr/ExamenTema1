#include <iostream>

int suma(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int numero1, numero2;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    int resultado = suma(numero1, numero2);

    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << resultado << std::endl;

    return 0;
}
