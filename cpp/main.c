//
// Created by barba on 21/11/2024.
//

#include "main.h"
#include "estudiante/estudiante.h"

void ejecutarPrograma() {
    Estudiante estudiante;
    inicializarEstudiante(&estudiante, "Juan Perez", 20, 8.5);
    mostrarEstudiante(&estudiante);
}

int main() {
    ejecutarPrograma();
    return 0;
}

