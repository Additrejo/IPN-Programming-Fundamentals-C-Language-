/*Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 15. Efecto domino.
Creado Feb 22 22:40:52 2016
Descripcion: Elabore un programa en C. que al ingresar por medio del usuario un caracter lo desplace de forma horizontal 
de izquierda a derecha y de derecha a izquierda usando programa modular
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int,int);

int leer (void)
{
	printf("ingrese el caracter: ");
	return(getch());
}
 void desplazamiento(int c)
 {
 	int t;
 	for (t=1;t<=120;t++)
 	{
 		gotoxy(t,15); printf("%c",c); Sleep(50);
	 }
	 
	for( ;t>1;t--)
	{
		gotoxy(t,15); printf("%c,",c); Sleep(50);
	}
 }

int main() 
{
	desplazamiento(leer());
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
