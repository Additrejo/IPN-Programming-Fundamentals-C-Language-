/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 21.Serie de ULAM
Creado Mar 03 16:32:09 2016
Descripcion: Elabore un programa en C. que desarrolle la serie de ULAM, la cual se obtiene a partir de los siguientes pasos.

a) Comienza con cualquier número positivo
b) Si el número es par dividelo enre 2, si es impar multiplicalo por 3 y sumale 1
c)Repetir el paso b hasta llegar al 1
----------------------------------------------------------------------------------------------------------
*/


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int,int);

int leer(void)
{
	int m;
    
    gotoxy(50,5); printf("'Serie de ULAM'");
	gotoxy(45,8); printf("Ingrese un numero positivo: ");
	scanf("%d",&m);  return(m);
}

void ULAM(int n)
{
	for( ; n!=1; )
	{
		if(n%2)
		{
			n*=3; n++;
		}
		else
		{
		 n/=2;	
		}
		printf(" %d ",n);
	}
}

int main()
{
	int p;
	p=leer();
	
	
	if(p>0)
	{
		ULAM(p);
	}
	else
	{
	  printf("El numero positivo");	
	}
	
	getch();
	return 0;
}

void gotoxy(int x,int y)
{
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition (Manipulador, Coordenadas);
}
