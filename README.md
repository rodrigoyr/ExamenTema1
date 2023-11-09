# ExamenTema1
https://github.com/rodrigoyr/ExamenTema1.git

## Parte 1: Preguntas de opción múltiple:
**1. C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?**  
 d. Todas las anteriores

**2. Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?
 b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación**

**3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?
 b. Variables que almacenan la dirección de otra variable**


## Parte 2: Problemas de codificación (Descripcion bereve de cada ejercicio)
*He hecho uso de diferentes herramientas a la hora de realizar mis codigos en los ejercicios, he utilizado chatGPT y el Github Copilot de CLion, junto con la extensión de Copilot Chat de VSCode, ya que no esta implementada aún en el IDE de CLion, además he hecho uso en alguna ocasión de los apuntes para resolver algún código erróneo, a continuación procedo a explicar brevemente cada ejercicio*
**1.** En este rpmer ejercicio se define una función suma que coge dos números y devuelve su suma. Luego, en el main, se pide al usuario que ingrese dos números, se llama a la función suma para calcular la suma y se muestra el resultado.
**2.** En el ejercicio 2 he definido una clase llamada Estudiante con propiedades nombre, edad y grado, y una función miembro mostrar_info() que muestra la información del estudiante. En el main, se llama a Estudiante llamada estudiante y se solicita al usuario que ingrese el nombre, edad y grado del estudiante. Luego, se muestra la información con la función mostrar_info().
**3.** En el tercer ejercicio se realiza el intercambio de valores entre dos variables con punteros. Primero, se declara una función `intercambiar` que toma dos punteros, esta función se utiliza para intercambiar los valores de los punteros, en el main se declaran num1 y num2 y se pide que se ingresen dos numeros, se muestra el valor de num1 y num2, y con la funcion intercambiar se intercambian los valores a los que apuntan los punteros mostrando asi lod valores num1 y num2 intercambiados, uno en la posición del otro.
**4.** En el cuarto ejercicio se usan excepciones para una division. Se define una funcion, a la que llamamos división que toma dos números, si el denominador es cero lanza una excepcion con un mensaje de error, en el main se declaran numerador y denominador y se pide que se ingresen estos dos valores. En un bloque try se llama a division, si la division se realiza bien aparece en pantalla, y si ocurre una excepcion se lanza un bloque catch, en este caso 0, y aparece un mensaje de error.
**5.** En el ejercicio 5 se define una clase estudiante con propiedades nombre, edad, grado y las materias. El programa permite ingresar información de un estudiante, verla, registrarla y mostrar las materias. Se define la clase con propiedades, en el main, se llama a estudiante y en estudiante1 se mete la informcion, se muestra su informacion y se ve un menú con diferentes opciones, se puede ver las materias y agregar nuevas, con un bucle se permite al usuario seguir eligiendo opciones hast que presione la opcion 3, que es salir, y el porgrama termina.
**6.** En este ejercicio se calcula la media de todod los numeros de una lista, la cuál la ingres el usuario. Primero, se declara una funcion calcularpromedio que toma una lista de numeros sin decimales, en el main se crea una funcion llamada numeros para guardar los numeros que se han metido y se solicita que indique la cantidad de numeros que se han metido, despues se usa un bucle for para ingresar los numeros de 1 en 1, despues se llama a la primera funcion con la losta de numeros y se muestra el resultado en pantalla.
**7.** En el ejercicio y, se puyede agregar la asistencia de un estudiante diferentes dias: se define Asistencia para represengar la fecha y el estado de la asistencia, el programa no deja seguir si no se escribe la asistencia bien, se crea una clase estudiante con propiedades y en el main se solicita  que ingrese la informacion y finalmente se muestra la informacion recogida.
**8.** En este ejercicio se puede gestionar y ver la informacion de estudiantes por grados. Se creaun mapa grados donde se recoge toda la informacion de los estudiantes, el programa permite agregar estudiantes o mostrar los que hay en un grado, que son los que has añadido antes, si no hay ningun estudiante en el grado aparece reflejado en pantalla, con un bucle el programa sigue hasta que se elige la opcion de salir.
**9.** En el codigo del ejercicio 9 se muestra como se gestiona una expecion personalizada que aparece cuando se registra una misma materia dos veces. Se define una clase materiayaregistradaexcepcion y aparece un mensaje de error con la función what, la clase estudiante tiene registrrarmateria que busca si la materia ya ha sido registrada, se añade en el main un estudiante y se intenta registrar variad materias, cuando se registran dos materias iguales se lanza la excepcion y aparece el error. 
Este código en C++ muestra cómo gestionar una excepción personalizada (`MateriaYaRegistradaExcepcion`) que se lanza cuando se intenta registrar una materia que ya ha sido registrada por un estudiante. Aquí está la explicación en cuatro líneas:
**10.** En este ultimo ejercicio se administra a profesores. Se define la clase profesor con diferentes propiedades, en rl programa se permite ver la lista de profesoresm y agregra nuevos, con un bucle el prgrama sigue hasta que se selecciona la opcion salir y muestra la informacion de todos lod profesores que se han registrado.


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
