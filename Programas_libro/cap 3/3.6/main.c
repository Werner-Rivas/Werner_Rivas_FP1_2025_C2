#include <stdio.h>
#include <stdlib.h>

/* Nomina de profesores.
El programa, al recibir como datos los salarios de los profesores de una
universidad, obtiene la nomina y el prmedio de los salarios.

I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */

int main()
{
    int I = 0;
    float SAL = 0, PRO = 0, NOM = 0;
    printf("Ingrese el salario del profesor:\t");
    /* Observa que al menos se necesita ingresar el salario de un profesor para que
    no ocurra un error de ejecucion del programa.  */
    scanf("%f", &SAL);
    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf("Ingrese el salario de profesor -0 para terminar- :\t");
        scanf("%f", &SAL);
    }while (SAL);
    PRO = NOM / I;
    printf("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
    return 0;
}
