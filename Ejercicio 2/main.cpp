#include <iostream>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};

int main() {
    Estudiante estudiante;

    // Ingresar información del estudiante
    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, estudiante.nombre);

    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> estudiante.edad;
    std::cin.ignore(); // Limpiar el buffer del teclado

    std::cout << "Ingrese el grado del estudiante: ";
    std::getline(std::cin, estudiante.grado);

    // Mostrar la información del estudiante
    std::cout << "\nInformación del estudiante:" << std::endl;
    estudiante.mostrar_info();

    return 0;
}
