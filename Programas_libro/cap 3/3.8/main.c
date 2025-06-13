#include <stdio.h>
#include <stdlib.h>

/* Factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variables de tipo entero. */

int main()
{
    int I = 0, NUM = 0;
    long FAC;
    printf("\nIngrese el numero: ");
    scanf("%d", &NUM);
    if (NUM >= 0)
    {
        FAC = 1;
        for (I=1; I <= NUM; I++)
        FAC *= I;
        printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    else
        printf("\nError en el dato ingresado");
    return 0;
}
