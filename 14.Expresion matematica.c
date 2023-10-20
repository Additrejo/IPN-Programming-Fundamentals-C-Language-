/* Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 14. Expresión matematica.
Creado Feb 22 14:09:32 2016
Descripcion: 1. Haga un programa que resuelva la siguiente expresión matematica.

               a(r^n-1)
      suma = -------------
                   r-1
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float a,r,n,suma=0;
	
	printf("Expresion Matematica: suma = a(r^n-1)/ r-1 \n\n");
	
	printf("Ingrese el valor de a: "); scanf("%f",&a);
	printf("Ingrese el valor de r: "); scanf("%f",&r);
	printf("Ingrese el valor del exponente 'n': "); scanf("%f",&n);
	
	suma = a*((pow(r,n-1))/(r-1));
	
	printf("El resultado de la expresion matematica es: %.2f",suma);
	
	return 0;
}
