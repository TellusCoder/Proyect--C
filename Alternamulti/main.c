#include <stdio.h>
#include <stdlib.h>

 // Alternativas multiples o anidadas

int main()
{
    // Bloque de declarativas
    int num,parono ;

    /* Bloque de instrucciones */


    printf("Introduce un numero entero\n ");
    scanf( "%d", &num );
    parono = num % 2 ;


    if (parono == 0 && num != 0 ) {
        printf("%d Es par \n", num );

    } else {
    if (num == 0){
        printf(" %d Es neutro \n ", num );

    }
    else {
        printf(" %d Es impar\n ", num );

    }
    }


        printf( "Fin del programa ");
    return 0;
}
