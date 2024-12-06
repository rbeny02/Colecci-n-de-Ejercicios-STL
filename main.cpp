//
// Created by rania on 06/12/2024.
//

#include <iostream>
#include "ejercicios/ejercicio1.h"

int main() {
    std::cout << "Ejecutando el programa con el espacio de nombres 'Matematicas'\n";

    // Usando las funciones suma y resta del espacio de nombres Matematicas
    int resultadoSuma = Matematicas::suma(10, 20);
    int resultadoResta = Matematicas::resta(20, 10);

    std::cout << "El resultado de la suma es: " << resultadoSuma << std::endl;
    std::cout << "El resultado de la resta es: " << resultadoResta << std::endl;

    return 0;
}

