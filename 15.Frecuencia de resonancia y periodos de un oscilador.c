
/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 15.Calcular frecuencia de resonancia y sus periodos de oscilador
Creado Feb 25 22:54:02 2016
Descripcion: Elabore un programa en C que calcule la frecuencia de resonancia y sus periodos de un oscilador,
Los valores de C1,C2 y l son proporcinados por el usuario.
----------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void gotoxy(int x,int y);

int main()
 { 
    float C1,C2,L,FR,FO,TR,TO;
    float dospi = 6.283185307; //2 pi.
    
    gotoxy(20,5); printf("'Programa para calcular la frecuencia de resonancia  y periodos de oscilador'");
    gotoxy(40,7); printf("Ingresar C1: "); scanf("%f",&C1);
    gotoxy(40,8); printf("Ingresar C2: "); scanf("%f",&C2);
    gotoxy(40,9); printf("Ingresar L:"); scanf("%f",&L);
    
    //periodo de resonancia.
    FR = 1 /(dospi * sqrt(L*C1));
    //periodo de oscilacion.
	FO = 1/(dospi * sqrt((L*C1*C2)/(C1+C2)));
	//Periodo de antioscilacion.
	TR = 1/FR;
	//Total de periodo de oscilacion.
	TO = 1/FO;

    
    
    gotoxy(30,11); printf("El periodo de resonancia es: %f",FR);
    gotoxy(30,12); printf("El periodo de oscilacion es: %f",FO);
    gotoxy(30,14); printf("El periodo de antioscilacon es: %f",TR);
    gotoxy(30,15); printf("El total de periodo de oscilacion es: %f",TO);
    
    getch();
	return 1;
}

void gotoxy(int x,int y)
{
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
