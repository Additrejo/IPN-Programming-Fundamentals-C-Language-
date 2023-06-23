/*
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Suma de dos números
Creado Feb 22 16:32:53 2016
Descripcion: Este programa suma do números guardados en variables. 
*/

#include <stdio.h>

int main() {
    int numero1, numero2, suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2;

    printf("La suma de %d y %d es: %d\n", numero1, numero2, suma);

    return 0;
}

