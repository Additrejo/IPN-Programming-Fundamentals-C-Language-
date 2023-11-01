
/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 16.Calcular el area y el perimetro de un cuadrado
Creado Feb 19 16:40:24 2016
Descripcion:Elaborar un programa para calcular el area y el perimetro de un cuadrado
----------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void gotoxy(int,int);

 //leer
 float leer (void)
   
   {
	float h; //h  = lado
	
	gotoxy (40,7); printf("Ingrese la medida de los lados: "); scanf("%f",&h);
	return(h);
	
   }
    float perimetro (float x) // x = perimetro
    {
    	return(x*4);
	}
	
	float area (float m)
	{
		return(m*m);
	}
	void imprime(float a, float b)
	{
	gotoxy(45,9); printf("El Area es: %.2f metros cuadrados",a);
	gotoxy(45,10); printf("El perimetro es: %.2f metros",b);
	}

int main() 
{
	float A,P,L;
	gotoxy (30,5); printf("'Programa para calcular el area y perimetro de un cuadrado'");
	L = leer();
	P = perimetro(L);
	A = area(L);
	imprime(A,P);
	
	getch();
	return 1;
}

void gotoxy(int x, int y)
{
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition(Manipulador, Coordenadas);
	
}
