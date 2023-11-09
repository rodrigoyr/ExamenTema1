#include <iostream>
#include <string>
#include <vector>

struct Asistencia {
    std::string fecha;
    std::string estado;
};

class Estudiante {
public:
    std::string nombre;
    std::vector<Asistencia> asistencias;

    void agregarAsistencia(const std::string& fecha, const std::string& estado) {
        Asistencia nuevaAsistencia;
        nuevaAsistencia.fecha = fecha;
        nuevaAsistencia.estado = estado;
        asistencias.push_back(nuevaAsistencia);
    }

    void mostrarInformacionAsistencia() {
        std::cout << "Información de asistencia para el estudiante " << nombre << ":" << std::endl;
        for (const Asistencia& asistencia : asistencias) {
            std::cout << "Fecha: " << asistencia.fecha << ", Estado: " << asistencia.estado << std::endl;
        }
    }
};

int main() {
    Estudiante estudiante;

    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, estudiante.nombre);

    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        std::string fecha, estado;

        std::cout << "Ingrese la fecha de la clase: ";
        std::getline(std::cin, fecha);

        std::cout << "Estado de asistencia (asistio, falta, tardanza): ";
        std::getline(std::cin, estado);

        estudiante.agregarAsistencia(fecha, estado);

        std::cout << "¿Desea ingresar otra asistencia? (s/n): ";
        std::cin >> continuar;
        std::cin.ignore(); // Limpiar el buffer del teclado
    }

    estudiante.mostrarInformacionAsistencia();

    return 0;
}
