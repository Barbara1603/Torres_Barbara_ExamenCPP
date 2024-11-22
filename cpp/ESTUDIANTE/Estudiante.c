//
// Created by barba on 21/11/2024.
//

#include "Estudiante.h"
#include <stdio.h>
#include <string.h>

void inicializarEstudiante(Estudiante* estudiante, const char* nombre, int edad, float promedio) {
    strncpy(estudiante->nombre, nombre, MAX_NOMBRE - 1);
    estudiante->nombre[MAX_NOMBRE - 1] = '\0';
    estudiante->edad = edad;
    estudiante->promedio = promedio;
}

void mostrarEstudiante(const Estudiante* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
}
