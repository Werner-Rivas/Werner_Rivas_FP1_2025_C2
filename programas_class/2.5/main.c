#include <stdio.h>
#include <math.h>
/* Funcion matematica.
El programa obtiene el resultado de una funcion.

OP y T: variable de tipo entero
RES: variable de tipo real. */


int main()
{
    /*
    int OP, T;
    float RES;
    printf("\nIngrese la opcion del calculo y el valor entero: ");
    scanf("%d %d", &OP, &T);
    switch(OP)
    {
        case 1: RES = T/5;
            break;
        case 2: RES = pow(T,T);
            break;
        case 3:
        case 4: RES = 6 * T/2;
            break;
        default: RES = 1;
            break;
    }
    printf("\nResultado:    %7.2f", RES);
    */

    int op = 0, t = 0;
    float r = 0.0;

    printf("\nIngrese la opcion del calculo y el valor entero: ");
    scanf("%i %i", &op, &t);

    if(op > 0 && op < 5)
    {
        if(op == 1)
        {
            r = t/5;
        }else if(op == 2)
        {
            r = pow(t,t);
        }else if(op == 3)
        {
            r = 6* t/2;
        }else if(op == 4)
        {
            r = 6* t/2; //hace lo mismo que la opcion 3
        }
    }else
    {
        r = 1;
    }

    printf("\nEl resultado es: %7.2f", r );

    return 0;
}
