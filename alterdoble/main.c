#include <stdio.h>
#include <stdlib.h>
//Alternativas doble
//Algoritmo Par o Impar
int main()
{
    //Bloque de declarativas
    int num,parono ;

    /* Bloque de instrucciones */


    printf("Introduce un numero entero\n ");
    scanf( "%d", &num );
    parono = num % 2 ;


    if (parono == 0 ) {
        printf(" %d Es par \n", num );

    }
    else {
        printf(" %d es impar\n ", num );

    }

        printf( "Fin del programa ");
    return 0;
}
