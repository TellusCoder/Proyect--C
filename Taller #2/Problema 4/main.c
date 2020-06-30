//Taller # 2
// Problema 4
// Algoritmo MultiploDe3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Bloque declarativo de variables

    int num, multi;

    //Bloque de instrucciones

    printf("Introduce un numero entero: \n");
    scanf("%d", &num);

    multi = num % 3 ;

    if (multi == 0)
    {
        //Bloque de instrucciones
        printf (" %d Es multiplo de 3 ",num);
    }
    else
    {
        //Bloque de instrucciones
        printf(" %d No es multiplo de 3 ",num);
    }


    return 0;
}
