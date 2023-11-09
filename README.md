### ExamenTema1

## Parte 1: Preguntas de opción múltiple:
**1. C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?**  
 d. Todas las anteriores

**2. Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?
 b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación**

**3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?
 b. Variables que almacenan la dirección de otra variable**


## Parte 2: Problemas de codificación (Descripcion bereve de cada ejercicio)
*He hecho uso de diferentes herramientas a la hora de realizar mis codigos en los ejercicios, he utilizado chatGPT y el Github Copilot de CLion, ademas de la extensión de Copilot Chat de VSCode, ya que no esta implementada aún en el IDE de CLion, a continuación procedo a explicar brevemente*
**1.** En el ejercicio 1 he utilizado


## Parte 3: Preguntas de desarrollo
**8. La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica:**
- ¿Cómo la programación orientada a objetos difiere de la programación procedimental?
La programación orientada a objetos organiza el código alrededor de objetos con datos y funciones relacionadas, reutilizando así el codigo. En la programación procedimental, el código se estructura en funciones y se enfoca en procedimientos lineales, sin la misma reutilización que la programación orientada a objetos.

- ¿Cómo C++ brinda soporte para ambos paradigmas?
Permite crear clases y objetos para usar la programación orientada aobjetos, al mismo tiempo que permite escribir código procedimental sin necesidad de usar objetos. Esto hace que se pueda elegir el enfoque que mejor se adapte a la tarea.
  
**9. Las excepciones en C++ tienen un comportamiento específico. Describe:**
- ¿Qué es la propagación de una excepción?
La propagación de una excepción es cuando una excepción lanzada en una función no se maneja en esa función, por lo que se transmite a funciones más altas hasta que se captura y maneja o, si no se maneja termina el programa.

- ¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?
Si una excepción lanzada no es capturada por ningún bloque "catch", el programa se detiene y se llama a la función "terminate" del sistema, lo que normalmente resulta en la finalización del programa sin liberar recursos de manera correcta.

**10. La gestión de recursos es un concepto crucial en la programación. Explica:**
- ¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++?
La adquisición de recursos en C++ se refiere a la obtención de recursos como memoria, archivos o conexiones de manera segura y controlada mediante constructores y asignaciones de recursos.

- ¿Por qué es importante y cómo se relaciona con la gestión de excepciones?
Porque garantiza que los recursos se adquieran y liberen incluso cuando ocurren excepciones, evitando fugas de recursos. La gestión de excepciones se relaciona ya que un error durante la adquisición o liberación de recursos puede desencadenar excepciones con problemas en la aplicación.
