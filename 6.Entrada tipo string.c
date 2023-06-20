/*
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Entradas y salidas (Strings)- Ejercicio Nombre y apellidos
Creado Feb 18 22:03:53 2016
Descripcion:Use el tipo de entrada String para perdir al usuario su nombre y apellido para imprimirlo en la pantalla 
*/

#include <stdio.h>

int main()
{
	char x[50];
	
/*	//Forma numero 1 con scanf (Captura hasta el primer espacio)
	printf("Forma 1\n");
	printf("Escriba su nombre: \n");
	scanf("%s",&x);
	printf("Su nombre es: %s\n",x);
*/
	//Forma numero 2 con gets (Captura los espacios)
	printf("Forma 2\n");
	printf("Escriba su nombre y apellidos:\n");
	gets(x);
	printf("Su nombre es: %s",x);
	
	return 0;
}
