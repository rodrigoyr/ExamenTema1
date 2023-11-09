#include <iostream>
#include <string>
#include <vector>

// Excepción personalizada "MateriaYaRegistradaExcepcion"
class MateriaYaRegistradaExcepcion : public std::exception {
public:
    const char* what() const throw() {
        return "La materia ya ha sido registrada para este estudiante.";
    }
};

class Estudiante {
public:
    std::string nombre;
    std::vector<std::string> materiasRegistradas;

    void registrarMateria(const std::string& materia) {
        for (const std::string& m : materiasRegistradas) {
            if (m == materia) {
                throw MateriaYaRegistradaExcepcion();
            }
        }
        materiasRegistradas.push_back(materia);
        std::cout << "Materia registrada: " << materia << std::endl;
    }
};

