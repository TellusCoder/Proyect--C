#include <stdio.h>
#include <stdlib.h>

int main()

{
    /* Bloque declarativo de variable */
    int num,parono ;

    /* Bloque de instrucciones */


    printf("Introduce un numero entero\n ");
    scanf( "%d", &num );
    parono = num % 2 ;


    if (parono == 0 ) {
        printf("Es par %d\n", num );

    }


        printf( "Fin del programa ");


        return 0;



}
