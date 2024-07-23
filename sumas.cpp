#include <iostream>

int main() {
    double numero1, numero2;

    // Solicitar el ingreso de los dos n�meros
    std::cout << "Escribe el primer numero: ";
    std::cin >> numero1;

    std::cout << "Escribe el segundo numero: ";
    std::cin >> numero2;

    // Realizar las operaciones
    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;
    
    // Verificar si el segundo n�mero es distinto de cero para evitar divisi�n por cero
    if (numero2 != 0) {
        double division = numero1 / numero2;

        // Mostrar resultados
        std::cout << "La suma es: " << suma << std::endl;
        std::cout << "La resta es: " << resta << std::endl;
        std::cout << "La multiplicacion es: " << multiplicacion << std::endl;
        std::cout << "La division es: " << division << std::endl;
    } else {
        // Mostrar mensaje de divisi�n por cero
        std::cout << "No es posible dividir por cero." << std::endl;
    }

    return 0;
}

