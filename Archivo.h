#ifndef ARCHIVO_H
#define ARCHIVO_H
struct alumno {
int matricula;
char nombre[50];
char direccion[50];
};
struct alumno leerRegistro(FILE *fp, long numeroDeRegistro);
#endif
