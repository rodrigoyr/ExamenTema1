#include <iostream>
#include <string>
#include <vector>

class Profesor {
public:
    std::string nombre;
    int edad;
    std::string materiaImparte;
    int anosDocencia;

    Profesor(const std::string& nombre, int edad, const std::string& materiaImparte, int anosDocencia)
            : nombre(nombre), edad(edad), materiaImparte(materiaImparte), anosDocencia(anosDocencia) {}

    void mostrar_info_profesor() const {
        std::cout << "Información del profesor:" << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Materia que imparte: " << materiaImparte << std::endl;
        std::cout << "Años de docencia: " << anosDocencia << " años" << std::endl;
    }
};

int main() {
    std::vector<Profesor> listaProfesores;

    while (true) {
        std::string nombre, materiaImparte;
        int edad, anosDocencia;

        std::cout << "Ingrese el nombre del profesor (o escriba 'fin' para terminar): ";
        std::cin.ignore();
        std::getline(std::cin, nombre);

        if (nombre == "fin") {
            break;
        }

        std::cout << "Ingrese la edad del profesor: ";
        std::cin >> edad;
        std::cout << "Ingrese la materia que imparte el profesor: ";
        std::cin.ignore();
        std::getline(std::cin, materiaImparte);
        std::cout << "Ingrese los años de docencia del profesor: ";
        std::cin >> anosDocencia;

        Profesor nuevoProfesor(nombre, edad, materiaImparte, anosDocencia);
        listaProfesores.push_back(nuevoProfesor);

        std::cout << "Profesor registrado." << std::endl;
    }

    std::cout << "Listado de profesores:" << std::endl;
    for (const Profesor& profesor : listaProfesores) {
        profesor.mostrar_info_profesor();
        std::cout << std::endl;
    }

    return 0;
}
