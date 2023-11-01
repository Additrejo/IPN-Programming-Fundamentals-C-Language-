/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 17.Calcular el porcentaje de hombres y mujeres.
Creado Feb 20 23:39:02 2016
Descripcion: Elabore un programa en C que calcule el porcentaje de la presencia de hombres y mujeres.
----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
   float PH, PM;
   int NH,NM;
   
   printf("Programa para calcular el porcentaje de hombres y mujeres \n");
   printf("\nIngrese el numero de Hombres:");
   scanf("%d",&NH);
   printf("Ingrese el numero de Mujeres:");
   scanf("%d",&NM);
   
   PH=(NH*100)/(NH+NM);
   PM=100-PH;
   
   printf("\n\nEl porcentaje de Hombres es: %.2f %%",PH);
   printf("\nEl porcentaje de Mujeres es: %.2f %%",PM);
   
   
    getch();	
   	return 0;
}
