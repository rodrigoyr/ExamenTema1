#include <iostream>
#include <string>

class Profesor {
public:
    std::string nombre;
    int edad;
    std::string materiaImparte;
    int anosDocencia;

    Profesor(const std::string& nombre, int edad, const std::string& materiaImparte, int anosDocencia)
            : nombre(nombre), edad(edad), materiaImparte(materiaImparte), anosDocencia(anosDocencia) {}

    void mostrar_info_profesor() {
        std::cout << "Información del profesor:" << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Materia que imparte: " << materiaImparte << std::endl;
        std::cout << "Años de docencia: " << anosDocencia << " años" << std::endl;
    }
};

int main() {
    Profesor profesor1("Juan Pérez", 35, "Matemáticas", 10);

    // Llamar a la función miembro para mostrar la información del profesor
    profesor1.mostrar_info_profesor();

    return 0;
}
