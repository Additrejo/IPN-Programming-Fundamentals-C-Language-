/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 20.Divisor de voltaje
Creado Feb 25 16:40:14 2016
Descripcion: Elabore un programa en C divisor de voltaje que calcule el valor del voltaje de salida y la potencia.
El voltaje de entrada, la resistencia 1 y 2 serán definidos por el usuario.
----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void gotoxy(int,int);

int main() 

{
	float Vi,Vo,R2,R1,P;
	
	gotoxy(30,4); printf(" 'Divisor de voltaje: Vout y Potencia' ");
	
	gotoxy(40,6); printf("Ingrese el voltaje inicial [VOLTS]: ");
	              scanf("%f",& Vi);
	              
	gotoxy(40,7); printf("Ingrese el valor de la resistencia 1 [OHMS]: ");
	              scanf("%f",& R1);
	              
	gotoxy(40,8); printf("Ingrese el valor de la resistencia 2 [OHMS]: ");
	              scanf("%f",& R2);
	      
	Vo = Vi *(R2/(R1+R2));	  
		          

    P = Vi*Vi/(R1+R2);
    gotoxy(40,10); printf("El valor del voltaje de salida [Volts] es: %.2f",Vo);
    gotoxy(40,11); printf("El valor de la potencia [WATTS] es: %.3f", P);
    
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
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
