/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 24.Teclado musical
Creado Mar 10 14:23:09 2016
Descripcion: Elabore un programa en C, utilizando funciones para simular un teclado musical.
considere el uso de la funcion creada para calcular la frecuencia de las notas musicales
----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int,int);

char tecla;
int teclaint,x;

int main()
{
  gotoxy(40,5); printf("'Teclado Musical'");
  gotoxy(20,8); printf("Teclas negras  |     w(Do#)     e(Re#)     t(Fa)      y(Sol#)     u(La#)             |'");
  gotoxy(20,9); printf("Teclas blancas |a(Do)      s(Re)      d(Mi)     f(Fa#)       g(Sol)     h(la)  j(Si) |'");
  do 
  {
  	teclaint=getch();
  	tecla=(char)teclaint;
  	if (tecla=='a');
  	Beep(523,400); //Do
  	if (tecla=='w');
  	Beep(554,400);//Do#
  	if (tecla=='s');
  	Beep(587,400);//Re
  	if (tecla=='e');
  	Beep(622,400);//Re#
  	if (tecla=='d');
  	Beep(659,400);//Mi
  	if (tecla=='f');
  	Beep(698,400);//Fa
  	if (tecla=='t');
  	Beep(739,400);//Fa#
  	if (tecla=='g');
  	Beep(783,400);//Sol
  	if (tecla=='y');
  	Beep(830,400);//Sol#
  	if (tecla=='h');
  	Beep(880,400);//la
  	if (tecla=='u');
  	Beep(932,400);//La#
  	if (tecla=='j')
  	Beep(987,400);//Si
  }while(tecla!=x);
  
  getchar();getchar();
}



void gotoxy(int x, int y)
{
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
