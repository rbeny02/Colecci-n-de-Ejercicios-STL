//
// Created by rania on 06/12/2024.
//

#include "Ejercicio3.h"
#include <iostream>


namespace Geometria {

    // Constructor
    Circulo::Circulo(double r) : radio(r) {}

    // Método para calcular el área
    double Circulo::calcularArea() const {
        return 3.14 * radio * radio;
    }

    // Método para calcular el perímetro
    double Circulo::calcularPerimetro() const {
        return 2 * 3.14 * radio;
    }

    // Getter del radio
    double Circulo::getRadio() const {
        return radio;
    }

    // Setter del radio
    void Circulo::setRadio(double r) {
        radio = r;
    }
}

void Ejercicio3() {
}