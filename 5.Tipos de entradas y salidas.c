/*
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Entradas y salidas
Creado Feb 13 18:23:53 2016
Descripcion: Este programa muestra las entradas y salidas utilizando los tipos de datos int,float y char.
*/

#include <stdio.h>

int main()
{
	int a;
	float b;
	char c;
	
	//int
	printf("Digite el valor de a y una letra: \n");
	scanf("%d",&a);
	printf("El valor que usted asigno es: %d\n\n",a);
	//float
	printf("Digite el valor de b: \n");
	scanf("%f",&b);
	printf("El valor que usted asigno a b es: %f\n\n",b);
	//char
	printf("Digite el caracter de C: \n");
	scanf("%c",&c);
	printf("El caracter que usted Asigno es: %c",c);
	
	return 0;
}
