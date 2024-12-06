//
// Created by rania on 06/12/2024.
//

#include <iostream>
#include "Ejercicio 1//ejercicio1.h"
#include "Ejercicio 2/Circulo.h"
#include "Ejercicio 2/Ejercicio2.h"
#include "Ejercicio 2/Triangulo.h"


int main() {
    std::cout << "Ejecutando el programa con el espacio de nombres 'Matematicas'\n";

    // Usando las funciones suma y resta del espacio de nombres Matematicas
    int resultadoSuma = Matematicas::suma(10, 20);
    int resultadoResta = Matematicas::resta(20, 10);
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "El resultado de la suma es: " << resultadoSuma << std::endl;
    std::cout << "El resultado de la resta es: " << resultadoResta << std::endl;
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}

