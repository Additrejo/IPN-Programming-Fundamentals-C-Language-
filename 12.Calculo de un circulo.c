/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 12. Calculo de area, circunferencia y diametro de un circulo
Creado Feb 18 00:11:39 2016
Descripcion: Hacer un programa que calcule el area, circunferencia y diametro de un circulo.
----------------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
#define PI 3.141592654

int main()
{
	system("color f1");
	float a, r, c, d;
	printf("\t\t\t\t\t\tInstituto Politecnico Nacional\n"); 
	printf("\t\t\t\t\t\t  Addi Trejo | 1CV4\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\tPrograma para calcular Area, Circunferencia y Diametro de un circulo. \t\t\t\t\t\t\t\n");
	printf("Ingrese el radio del circulo:");
	scanf("%f", &r);

	while (r <= 0)
	{
		printf("el radio debe ser positivo\n");
		scanf("%f", &r);
	}

	a = PI*r*r;
	c = 2*PI*r;
	d = 2*r;

	printf("\n\n\n\t\t\t\t\t\tEl area es: %f", a);
	printf("\n\n\n\t\t\t\t\t\tLa circunferencia es: %f", c);
	printf("\n\n\n\t\t\t\t\t\tEl diamtero es: %f", d);

	getchar();
	getchar();
	return 0;
}
