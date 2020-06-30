#include <stdio.h>
#include <conio.h>


int mian ()

{
    /* Bloque declarativo de variable */
    int num,parono ;

    /* Bloque de instrucciones */


    printf( "\n Introduce un número entero\n ");
    scanf( "%d", &num );
    parono = num % 2 ;

    if (parono == 0 ) {
        printf("es par %d\n", num );

    }


        printf( "Fin del programa ");


        return 0;



}
