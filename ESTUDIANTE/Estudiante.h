

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H



#define MAX_NOMBRE 50

typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
} Estudiante;

void inicializarEstudiante(Estudiante* estudiante, const char* nombre, int edad, float promedio);
void mostrarEstudiante(const Estudiante* estudiante);



#endif
