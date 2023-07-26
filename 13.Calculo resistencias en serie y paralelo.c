/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 13. calculo de resistencias en serie y paralelo.
Creado Feb 18 00:11:39 2016
Descripcion: Hacer un programa en C para calcular la resistencia en serie y paralelo dado los valores de resistencia R1 y R2 dados por el usuario.
----------------------------------------------------------------------------------------------------------
*/


#include <stdio.h>
//#include <conio.h>

int main()
{
	
	system("color f1");
	printf("\t\t\t\t\tInstituto Politecnico Nacional\n"); 
	printf("\t\t\t\t\tAlumno:  Addi Trejo | 1CV4\n");
	printf("\t\t\t\t\t\ Fecha:  26 Febrero 2016\n\n");
	printf("\t\t\tPrograma: Calcular el valor de la resistencia en serie y paralelo\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	float R1,R2;
	float RS,RP;

	printf("Ingrese Resistencia 1: ");
	scanf("%f",& R1);
	printf("\nIngrese Resistencia 2: ");
	scanf("%f",& R2);

    RS = R1 + R2;
    RP = 1/(1/R1+1/R2);
	
	printf("\nEl valor de la Resistencias en serie [OHMS] es: %.2f Ohms", RS);
	printf("\nEl valor de la Resistencias en paralelo [OHMS] es: %.2f Ohms", RP);
	
	getch();
	return 0;
		
}
