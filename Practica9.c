#include <stdio.h>
#include <stdlib.h>
#include "archivo.h"
#define NUM_REGISTROS 20
#define NOMBRE_ARCHIVO "registros.dat"
int main() {
FILE *fp;
struct alumno reg;
// Abrir el archivo en modo de lectura binaria
fp = fopen(NOMBRE_ARCHIVO, "rb");
if (fp == NULL) {
printf("No se pudo abrir el archivo.\n");
exit(1);
}
// Generar 20 registros aleatorios
for (int i = 0; i < NUM_REGISTROS; i++) {
long numeroDeRegistro = rand() % NUM_REGISTROS; // Obtener un
número de registro aleatorio
reg = leerRegistro(fp, numeroDeRegistro);
printf("Registro %ld:\n", numeroDeRegistro);
printf("Matrícula: %d\n", reg.matricula);
printf("Nombre: %s\n", reg.nombre);
printf("Dirección: %s\n", reg.direccion);
printf("-------------------\n");
}
// Cerrar el archivo
fclose(fp);
return 0;
}
