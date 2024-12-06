cmake_minimum_required(VERSION 3.29)
project(Colecci_n_de_Ejercicios_STL)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Colecci_n_de_Ejercicios_STL
    main.cpp
        "Ejercicio 1/Ejercicio1.h"
        "Ejercicio 2/Ejercicio2.h"
        "Ejercicio 3/Ejercicio3.h"
        "Ejercicio 4/Ejercicio4.h"
        "Ejercicio 5/Ejercicio5.h"
        "Ejercicio 1/Ejercicio1.cpp"
        "Ejercicio 2/Circulo.h"
        "Ejercicio 2/Circulo.cpp"
        "Ejercicio 2/Triangulo.h"
        "Ejercicio 2/Triangulo.cpp"
        "Ejercicio 3/Ejercicio3.cpp"
        "Ejercicio 4/Ejercicio4.cpp"
        "Ejercicio 5/Ejercicio5.cpp"
)
