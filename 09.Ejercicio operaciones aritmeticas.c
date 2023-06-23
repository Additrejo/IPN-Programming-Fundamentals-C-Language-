/*
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Ejercicio operaciones artimeticas
Creado Feb 13 23:27:23 2016
Descripcion: Pedir 2 numeros al usuario y sumarlos,restarlos,multiplicarlos y dividirlos.
*/

#include <stdio.h>

int main()

{
	int num1;
	int num2;
	int suma;
	int resta;
	int mult;
	int div;
	
	printf("Ingrese su primer numero: \n");
	scanf("%d",&num1);
	printf("Ingrese su segundo numero: \n");
	scanf("%d",&num2);
	
	suma = num1 + num2;
	resta = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("El resultado de la suma es: %d \n", suma);
	printf("El resultado de la resta es: %d \n", resta);
	printf("El resultado de la multiplicacion es: %d \n",mult);
	printf("El resultado de la division es: %d \n",div);
	
	return 0;
	
}
