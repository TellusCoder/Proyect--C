// Laboratorio #5
// Generar las tablas del 1 al 4 tomando en cuenta los valores 1 al 12.
// Problema # 3
// Algoritmo  TablaDeMultiplicar

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Bloque declarativo  de variable 
    int contador =0;
    int unidad = 1;
    int multi = 0 ;
    int result ;

    // Bloque de instrucciones 
    printf ("\n\t\t\t\t\t\t\t\tTABLAS DE MULTIPLICAR DEL 1 HASTA AL 4\n\n");
    while (contador < 4)
    {
        // Bloque de instrucciones 
        contador = contador + unidad ;
        printf ("\nTABLA DEL  %d\n\n ",contador);


        // anidamiento en ciclo mientras 

        while (multi < 12)
        {
            // Bloque de instrucciones 
            multi = multi + unidad ;
            result = contador * multi ;
            printf ("%d X %d = %d\n ",contador,multi,result);

        }
        multi = 0 ;
    }
    printf ("\nFin del Programa \n\n") ;

    system("PAUSE");
    
    return 0;
}
