#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    Estudiante(const std::string& nombre, int edad, const std::string& grado)
            : nombre(nombre), edad(edad), grado(grado) {}
};

std::vector<Estudiante> filtrarEstudiantesPorGrado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantesFiltrados;
    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }
    return estudiantesFiltrados;
}

int main() {
    // Crear una lista de estudiantes
    std::vector<Estudiante> listaEstudiantes;
    listaEstudiantes.push_back(Estudiante("Juan", 20, "A"));
    listaEstudiantes.push_back(Estudiante("María", 19, "B"));
    listaEstudiantes.push_back(Estudiante("Pedro", 21, "A"));
    listaEstudiantes.push_back(Estudiante("Ana", 18, "C"));

    // Pedir al usuario el grado a filtrar
    std::string gradoFiltrar;
    std::cout << "Ingrese el grado a filtrar: ";
    std::cin >> gradoFiltrar;

    // Filtrar estudiantes por grado
    std::vector<Estudiante> estudiantesFiltrados = filtrarEstudiantesPorGrado(listaEstudiantes, gradoFiltrar);

    // Mostrar los estudiantes del grado especificado
    if (estudiantesFiltrados.empty()) {
        std::cout << "No se encontraron estudiantes en el grado " << gradoFiltrar << std::endl;
    } else {
        std::cout << "Estudiantes en el grado " << gradoFiltrar << ":" << std::endl;
        for (const Estudiante& estudiante : estudiantesFiltrados) {
            std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << std::endl;
        }
    }

    return 0;
}
