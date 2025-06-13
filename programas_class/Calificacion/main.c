#include <stdio.h>
#include <stdlib.h>

//imprimir la nota de un estudiante
//valor maximo es 100 y el minimo 0

//A se imtrime A si el valor es mayor a 89
//B se imtrime B si el valor es mayor a 79 y menor que 90
//C se imtrime A si el valor es mayor a 69 y menor a 80
//F se imtrime A si el valor es menor a 70

int main()
{
    //declarar e inicializar
    int nota = 0;

    printf("\nIngrese la nota: ");
    scanf("%i", &nota);

    //validar el dato
    if(nota >= 0 && nota <= 100)
    {
        /*if(nota >= 90)
        {
            printf("\nLa nota de %i[%c]", nota,'A');
        }
        if (nota <90 && nota >= 80)
        {
           printf("\nLa nota de %i[%c]", nota,'B');
        }
        if (nota <80 && nota >= 70)
        {
           printf("\nLa nota de %i[%c]", nota,'C');
        }
        if (nota < 70)
        {
            printf("\nLa nota de %i[%c]", nota,'F');
        }*/

        if(nota <70)
        {
            printf("\nLa nota de %i[%c]", nota,'F');
        }else if(nota <80)
        {
            printf("\nLa nota de %i[%c]", nota,'C');
        }else if(nota <90)
        {
            printf("\nLa nota de %i[%c]", nota,'B');
        }else if(nota <=100)
        {
            printf("\nLa nota de %i[%c]", nota,'A');
        }
    }
    else
    {
        printf("\nValor de nota invalido");
    }
    printf("\nFin del programa");
    return 0;
}
