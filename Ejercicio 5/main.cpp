#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }

    void ingresar_info() {
        std::cout << "Ingrese el nombre del estudiante: ";
        std::cin.ignore();  // Para limpiar el buffer de entrada
        std::getline(std::cin, nombre);
        std::cout << "Ingrese la edad del estudiante: ";
        std::cin >> edad;
        std::cout << "Ingrese el grado del estudiante: ";
        std::cin.ignore();  // Para limpiar el buffer de entrada
        std::getline(std::cin, grado);
    }

    // Función para registrar materias
    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }

    // Función para mostrar las materias registradas
    void mostrar_materias() {
        if (materias.empty()) {
            std::cout << "El estudiante no tiene materias registradas." << std::endl;
        }
        else {
            std::cout << "Materias registradas para " << nombre << ":" << std::endl;
            for (const std::string& materia : materias) {
                std::cout << "- " << materia << std::endl;
            }
        }
    }
};

int main() {
    Estudiante estudiante1;

    estudiante1.ingresar_info();

    std::cout << "Informacion del estudiante:" << std::endl;
    estudiante1.mostrar_info();

    int opcion;
    while (true) {
        std::cout << "Opciones:" << std::endl;
        std::cout << "1. Ver materias añadidas" << std::endl;
        std::cout << "2. Agregar nuevas materias" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Elija una opción: ";
        std::cin >> opcion;

        if (opcion == 1) {
            estudiante1.mostrar_materias();
        } else if (opcion == 2) {
            std::string nueva_materia;
            std::cout << "Ingrese una nueva materia: ";
            std::cin.ignore();
            std::getline(std::cin, nueva_materia);
            estudiante1.registrar_materia(nueva_materia);
        } else if (opcion == 3) {
            break;
        } else {
            std::cout << "Opción no válida. Por favor, elija una opción válida." << std::endl;
        }
    }

    return 0;
}