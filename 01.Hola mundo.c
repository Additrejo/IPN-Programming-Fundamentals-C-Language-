/*
Instituto Polit?cnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Hola mundo
Created on Thu Feb 4 17:34:09 2018
Descrpción: Realizar un programa que imprma en la pantalla el texto "Hola mundo"
*/

#include <stdio.h>                   //Esta biblioteca contiene funciones para la lectura y escritura de caracteres, cadenas, n?meros y otros tipos de datos desde y hacia archivos y dispositivos de entrada/salida.
#include <stdlib.h>                 //Esta biblioteca contiene funciones para la lectura y escritura de caracteres, cadenas, n?meros y otros tipos de datos desde y hacia archivos y dispositivos de entrada/salida. En este progama sirve para system pause
int main ()
{
 printf("\t Hola Mundo \n");       //"Printf" se utiliza para texto. \t se utiliza para dar un epacio, \n. se utiliza para un salto de linea.
 system ("pause");                 //Se utiliza para agregar una pausa en la ejecuci?n de un programa de consola de manera que el usuario tenga tiempo de revisar la salida
 return 0;                         //Se utiliza para indicar que la ejecuci?n del programa ha finalizado sin errores, y este valor se devuelve al sistema operativo para su posterior procesamiento.
}
 
