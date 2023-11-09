#include <iostream>
#include <list>
#include <string>

class Estudiante {
public:
    Estudiante(std::string nombre) : nombre(nombre) {}

    void registrar_materias(const std::string& materia) {
        materias.push_back(materia);
    }

    void mostrar_materias() {
        if (materias.empty()) {
            std::cout << "El estudiante " << nombre << " no tiene materias registradas." << std::endl;
        } else {
            std::cout << "Materias registradas por " << nombre << ":" << std::endl;
            for (const std::string& materia : materias) {
                std::cout << "- " << materia << std::endl;
            }
        }
    }

private:
    std::string nombre;
    std::list<std::string> materias;
};

int main() {
    Estudiante estudiante1("Juan");
    estudiante1.registrar_materias("Matemáticas");
    estudiante1.registrar_materias("Historia");
    estudiante1.registrar_materias("Biología");

    Estudiante estudiante2("María");
    estudiante2.registrar_materias("Química");
    estudiante2.registrar_materias("Física");

    estudiante1.mostrar_materias();
    estudiante2.mostrar_materias();

    return 0;
}
