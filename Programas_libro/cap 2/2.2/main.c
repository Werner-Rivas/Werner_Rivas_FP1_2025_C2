#include <stdio.h>
#include <stdlib.h>
/* Incremento de Precio.
El programa, al recibir como dato el precio de un producto importado,incrementa 11% el mismo si este es inferior a $1,500.
PRE y NR: variable de tipo real. */

void main(void)
{
float PRE, NPR;
printf("ingrese el precio del producto: ");
scanf("%f", &PRE);
if (PRE > 1500)
{
    NPR = PRE * 1.11;
    printf("\nNuevo precio: %7.2f",NPR);
}
}
