#include <iostream>
#include <vector>

double calcularPromedio(const std::vector<int>& numeros) {
    int suma = 0;
    for(int numero : numeros) {
        suma += numero;
    }
    return static_cast<double>(suma) / numeros.size();
}

int main() {
    std::vector<int> numeros;
    int n;

    std::cout << "Ingrese la cantidad de números: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int numero;
        std::cout << "Ingrese el número " << (i + 1) << ": ";
        std::cin >> numero;
        numeros.push_back(numero);
    }

    double promedio = calcularPromedio(numeros);

    std::cout << "El promedio es: " << promedio << std::endl;

    return 0;
}
