/*
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Ejercicio ecuación de primer grado
Creado Feb 14 22:46:23 2016
Descripcion: Hacer un programa que resuelva una ecuacion de primer grado.
*/

#include <stdio.h>

int main()
{
	float A,B,C,X;
	
	printf("Programa para resolver ecuacion de primer grado Ax+B=C: \n");
	printf("Ingrese el valor de A: \n");
	scanf("%f",&A);
	printf("Ingrese el valor de B: \n");
	scanf("%f",&B);
	printf("Ingrese el valor de C: \n");
	scanf("%f",&C);
	
	X=(C-B)/A;
	
	printf("El resultado es: %f",X);
	
	return 0;
}
