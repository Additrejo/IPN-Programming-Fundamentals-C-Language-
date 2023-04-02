
/*
Instituto Polit?cnico Nacional. ESIME Z.
Materia: Fundamentos de programacion.
Autor: Addi Trejo.
Programa: Portada
Creado Feb 13 11:02:09 2016
Descrpción: Este programa muestra los tipos de datos y su tamaño 
*/
#include<stdio.h>
#include<conio.h>


int main()

{     
	system("color f1");
	printf("\t\t\t\t\tFormato y tamano de los soguientes tipos\n");
	printf("\t\t\t\t\t\t  Addi Trejo. 1CV4\n\n");
    printf("\tTipo                                         Numero De Bits                          Rango\n\n");
    printf("\n\tBooleano                                           8                                  1 a 0");
    printf("\n\tByte                                               8                                  0 a 255");
    printf("\n\tChar                                               8                               -128 a 127");
    printf("\n\tdouble                                             8              -1,79769313486232^308 a -4.94065645841247^-324");
    printf("\n\tunsigned char                                      8                                  0 a 255");
    printf("\n\tsigned char                                        8                               -128 a 127");
    printf("\n\tshort                                              16                            -32768 a 32767");
    printf("\n\tint                                                16                            -32768 a 32767");
    printf("\n\tunsigned int                                       16                                 0 a 65535");
    printf("\n\tsigned int                                         16                            -32768 a 32767");
    printf("\n\tshort int                                          16                            -32768 a 32767");
    printf("\n\tunsigned short int                                 16                                 0 a 65535");
    printf("\n\tsigned short int                                   16                            -32768 a 32767");
    printf("\n\tlong int                                           32                       -2147483648 a 2147483647");
    printf("\n\tsigned long int                                    32                       -2147483648 a 2147483647");
    printf("\n\tunsigned long int                                  32                                 0 a 4294967295");
    printf("\n\tlong                                               32                       -2147483648 a 2147483647");
    printf("\n\tunsigned long                                      32                                 0 a 4294967295");
    printf("\n\tfloat                                              32                          1.7E-308 a 1.7E+308");
    printf("\n\tEntero                                             32                                 0 a 4.294.967.295");
    printf("\n\tDecimal                                            64       (-922.337.203.685.477,5800) a 922.337.203.685.477,58");                                         
    printf("\n\tlong double                                       64o80                        1.7E-308 a 1.7E+308\n\n");

     system("pause");
     return 0;
}
