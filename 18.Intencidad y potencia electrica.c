/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 18.Intensidad y potencia electrica
Creado Feb 25 00:28:23 2016
Descripcion: Elabore un programa en C que calcule la intensidad y la potencia electrica dados los datos de resistencia y voltaje.
----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
   float R,V,P,I;
   printf("Programa para calcular la intensidad y potencia electrica de un circuito \n");
   printf("\nIngrese la resistencia [OHMS]:");
   scanf("%f",&R);
   printf("\nIngrese el voltaje [VOLTS]:");
   scanf("%f",&V);
   
   I=V/R;

   P=V*I;
      
   printf("\nLa intencidad de corriente es: %f [Ampere] ",I);
   printf("\nLa potencia es: %f [Watts] ",P);
   
   getch();
   return 0;
}
