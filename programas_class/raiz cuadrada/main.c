#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 0;
    float b = 0;
    int contador = 1;
    printf("\nIngrese el numero: %f");
    scanf("%f", &x);
    b = x;

    while(!(b == (x/b)))
    {
          b = 0.5 * ((x/b)+b);
          contador++;
    }

    printf("\nLa raiz cuadrada de %f es: %f");
    return 0;
}
