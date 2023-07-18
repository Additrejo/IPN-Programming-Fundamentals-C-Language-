
/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 11. Teorema de pitagoras
Creado Feb 17 23:51:06 2016
Descripcion: Hacer un programa que resuelva el teorema de pitagoras.
----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h> 

int main()
{
	// Declaraciones 

	float lado1, lado2, hipotenusa;

	// Entrada de datos 

	system("color f1");
	
	printf("\t\t\t\t\t\t  Addi Trejo. 1CV4\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\tCalculo de la hipotenusa de un triangulo rectangulo.\t\t\n");
//	printf("\t\t\t\t\tde un triangulo rectangulo\t\t\n");


	printf("  -\n");
	printf("  --\n");
	printf("  ---\n");
	printf("  ----\n");
	printf("a -----  h\n");
	printf("  -------\n");
	printf("  --------\n");
	printf("  ----------\n");
	printf("  ------------\n");
	printf("     b       \n");

	printf("\n Ingrese la medida del lado a: ");
	scanf("%f", &lado1);
	printf("Ingrese la medida del lado b: ");
	scanf("%f", &lado2);

	// Cálculos 

	hipotenusa = sqrt(lado1*lado1 + lado2*lado2);

	// Salida de resultados 

	printf("La hipotenusa mide %f.\n", hipotenusa);


	system("PAUSE");
	return 0;
}
