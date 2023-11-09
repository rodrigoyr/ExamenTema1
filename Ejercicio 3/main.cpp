#include <iostream>

void intercambiar(int *ptr1, int *ptr2);


void intercambiar(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    std::cout << "Valores originales: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Llamamos a la función intercambiar utilizando punteros
    intercambiar(&num1, &num2);

    std::cout << "Valores intercambiados: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
