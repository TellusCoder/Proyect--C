#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Bloque de declarativas
    int num ;

    /* Bloque de instrucciones */


    printf("Introduce un numero entero\n ");
    scanf( "%d", &num );

    if ( num % 7 == 0 ) {
            // Bloque de instrucciones
        printf(" %d Es multiplo de 7 \n", num );

    }
    else {
            //Bloque de instrucciones
        printf(" %d No es multiplo de 7 \n ", num );

    }

   if (num % 2 == 0 ) {
    //  Bloque de instrucciones
        printf("%d Es par \n", num );

    }
    else {
            //Bloque de instrucciones
        printf(" %d es impar\n ", num );

    }


}
