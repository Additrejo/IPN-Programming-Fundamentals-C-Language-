/*
-------------------------------------------------------------------------------------------------------------------
Instituto Politecnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: 23.Factorial de un número
Creado Mar 08 11:23:56 2016
Descripcion: Elabore un programa en C que muestre el factorial de un numero dado por un usuario.
----------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int leer(void) {
    int f;
    printf("\n                Factorial de un numero:");
    printf("\n\nIngrese Valor:");
    scanf("%d", &f);
    return f;
}

double factorial(int x) {
    double f = 1;
    for (; x > 1; x--) {
        f *= x;
    }
    return f;
}

void imprime(double p) {
    printf("El factorial es: %.0f\n", p);
}

int main() {
    imprime(factorial(leer()));
    return 0;
}
