#include <iostream>
#include <string>
#include <vector>
#include <map>

class Estudiante {
public:
    std::string nombre;
    int edad;

    Estudiante(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}
};

int main() {
    std::map<std::string, std::vector<Estudiante>> grados;  // Mapa para almacenar estudiantes por grado

    while (true) {
        int opcion;
        std::cout << "Opciones:" << std::endl;
        std::cout << "1. Agregar estudiante a un grado" << std::endl;
        std::cout << "2. Mostrar estudiantes por grado" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Elija una opción: ";
        std::cin >> opcion;

        if (opcion == 1) {
            std::string grado;
            std::cout << "Ingrese el nombre del estudiante: ";
            std::string nombre;
            std::cin.ignore();
            std::getline(std::cin, nombre);
            std::cout << "Ingrese la edad del estudiante: ";
            int edad;
            std::cin >> edad;

            std::cout << "Ingrese el grado al que pertenece el estudiante: ";
            std::cin.ignore();
            std::getline(std::cin, grado);

            Estudiante estudiante(nombre, edad);

            grados[grado].push_back(estudiante);

            std::cout << "Estudiante agregado al grado " << grado << std::endl;
        } else if (opcion == 2) {
            std::string grado;
            std::cout << "Ingrese el grado para ver los estudiantes: ";
            std::cin.ignore();
            std::getline(std::cin, grado);

            if (grados.find(grado) != grados.end()) {
                std::cout << "Estudiantes en el grado " << grado << ":" << std::endl;
                for (const Estudiante& estudiante : grados[grado]) {
                    std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << std::endl;
                }
            } else {
                std::cout << "El grado especificado no existe." << std::endl;
            }
        } else if (opcion == 3) {
            break;
        } else {
            std::cout << "Opción no válida. Por favor, elija una opción válida." << std::endl;
        }
    }

    return 0;
}
