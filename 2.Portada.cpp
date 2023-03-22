/*
Instituto Polit?cnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Portada
Creado Feb 9 18:02:09 2016
Descrpción: Realizar un programa que imprma en la pantalla una portada utilizando coordenadas de posición. 
*/

#include <stdio.h>                                                                    //Al incluir "stdio.h" en un programa, se pueden utilizar estas funciones y macros en el código para realizar operaciones de entrada y salida, 
#include <windows.h>                                                                  //Esta directiva incluye el archivo de encabezado (header file) "windows.h" que contiene las declaraciones de las funciones y estructuras necesarias para realizar operaciones relacionadas con el sistema operativo Windows.
#include <conio.h>                                                                    //la librería "conio.h" proporciona funciones útiles para la programación de aplicaciones de consola en lenguaje C.

	void gotoxy(int x, int y)                                                         //La función "gotoxy(x, y)" es una función de la librería "conio.h" que se utiliza para posicionar el cursor de texto en una coordenada específica de la pantalla de la consola
	{
		COORD pos {x,y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}

int main()
{

	
	system ("COLOR F4");                                                           //Fondo y color de texto
	//gotoxy(x,y); muestra la coordenada de impresion del texto printf("")
	gotoxy(48,7); printf("Instituto Politecnico Nacional");                       
	gotoxy(35,8); printf("Escuela Superior De Ingenieria Mecanica y Electrica");
	gotoxy(40,9); printf("Ingenieria En Comunicaciones Y Electronica");
	gotoxy(48,12); printf("Fundamentos De programacion");
	gotoxy(52,14); printf("Practica: 1 Portada");
	gotoxy(57,16); printf("Addi Trejo");
	gotoxy(13,20); printf("Fecha: Feb 9,2016");
	
	getch();                                                                       //se utiliza para leer un carácter introducido por el usuario desde el teclado, sin esperar a que el usuario pulse la tecla "Enter".
	return 0;                                                                     //Se utiliza para indicar que la ejecucion del programa ha finalizado sin errores, y este valor se devuelve al sistema operativo para su posterior procesamiento.
 }//Fin del programa


