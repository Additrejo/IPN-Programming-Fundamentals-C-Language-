/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 22.Serie de Fibonacci
Creado 	Mar 05 23:20:08 2016
Descripcion: Elabore un programa en C. que desarrolle los primeros n terminos de la serie de fibonacci
la cual inicia con los terminos. 1,1,2,3,5....n. y los demas se obtiene de la suma de los 2 anteriores
----------------------------------------------------------------------------------------------------------
*/


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int,int);

int leer (void)
{
	int m;
	gotoxy(38,4); printf("Serie de Fibonacci ");
	gotoxy(30,6); printf("Cuantos terminos desea generar: ");
	scanf("%d",&m);
	return (m);
}

void fibonacci(int k)
{
	/* 1+1+2+3+5+8
	   x+y=z
	*/
	
	int x=1,y=1,z,t;
	
	for(t=1;t<=k;t++)
	{ 
	   z=x+y;   
	   /*gotoxy(0,6); printf("1 1"); */     
	   printf("  %d",z);
	   x=y;
	   y=z;

	}
}

int main()

{   
    
    fibonacci(leer());
	getch();
	return 0;
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
