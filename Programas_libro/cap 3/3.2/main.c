#include <stdio.h>
#include <stdlib.h>

/* Suma positivos.
El programa, al recibir como datos N numeros enteros, obtien la suma de los
enteros positivos.

I, N, NUM, SUM: variables de tipo enter. */

int main()
{
    int I = 0, N = 0, NUM = 0, SUM = 0;
    printf("Ingrese el numero de datos:\t");
    scanf("%d", &N);
    for(I=1; I<=N; I++)
    {
        printf("Ingrese el dato numero %d:\t", I);
        scanf("%d", &NUM);
        if (NUM > 0)
            SUM = SUM + NUM;
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM);
    return 0;
}
