/*
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Tipos de datos - macros
Creado Feb 13 18:23:53 2016
Descripcion: Este programa muestra los tipos de datos y su tamaño usando macros
*/
#include <stdio.h>

int main()

{
	char a = 'e'; //Tamaño = 1byte Rango: 0...255
	short b = - 15; //Tamaño = 2bytes Rango: -128...127
	int c = 1024; //Tamaño = 2bytes Rango: -32768...32767
	unsigned int d = 128; //Tamaño = 2bytes  Rango: 0...65535
	long e = 123456; //Tamaño = 4bytes
	float f = 15.678; //Tamaño = 4bytes
	double m = 123123.123123; //tamaño = 8bytes
	
	printf("El elemento char es : %c\n", a);
	printf("El elemento short es : %d\n",b);
	printf("El elemento int es: %d\n",c);
	printf("El elemento Unsigned int es: %d\n",d);
	printf("El elemento long es: %d\n", e);
    printf("El elemento float es: %f\n",f);
    printf("El elemento double es: %f\n",m);

    return 0;
}
