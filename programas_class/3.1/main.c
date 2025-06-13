#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I;
    float sal, nom, imp, neto, timp, tneto;
    nom = 0;
    timp = 0;
    tneto = 0;
    for (I=1; I<6; I++)
    {
        printf("\n\nIngrese el salario del profesor%d:\t", I);
        scanf("%f", &sal);
        nom = nom + sal;
        imp = sal * 0.2;
        neto = sal - imp;
        tneto = tneto + neto;
        timp = timp + imp;

        printf("El salario menos impuesto es: %.2f", neto);
        printf("\nEl impuesto es: %.2f", imp);
    }

    printf("\n\nEl total de la nomina es: %.2f", nom);
    printf("\nEl total a pagar es: %.2f", tneto);
    printf("\nEl total de los impuestos es: %.2f", timp, "\n");

    return 0;
}
