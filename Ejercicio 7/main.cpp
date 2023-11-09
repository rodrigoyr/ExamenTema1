#include <iostream>
#include <string>
#include <vector>

class RegistroAsistencia {
public:
    RegistroAsistencia(const std::string& fecha, const std::string& estado) : fecha(fecha), estado(estado) {}

    void mostrar_asistencia() const {
        std::cout << "Fecha de la clase: " << fecha << std::endl;
        std::cout << "Estado de asistencia: " << estado << std::endl;
    }

private:
    std::string fecha;
    std::string estado;
};

int main() {
    std::vector<RegistroAsistencia> asistencias;

    while (true) {
        std::string fecha, estado;
        std::cout << "Ingrese la fecha de la clase (o escriba 'fin' para terminar): ";
        std::cin.ignore();
        std::getline(std::cin, fecha);

        if (fecha == "fin") {
            break;
        }

        std::cout << "Estado de asistencia (asistio, falta, tardanza): ";
        std::cin >> estado;

        if (estado != "asistio" && estado != "falta" && estado != "tardanza") {
            std::cout << "Estado de asistencia no válido. Debe ser 'asistio', 'falta' o 'tardanza'." << std::endl;
            continue;
        }

        RegistroAsistencia registro(fecha, estado);
        asistencias.push_back(registro);
    }

    std::cout << "Asistencias registradas:" << std::endl;
    for (const RegistroAsistencia& registro : asistencias) {
        registro.mostrar_asistencia();
        std::cout << std::endl;
    }

    return 0;
}
