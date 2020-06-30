// Laboratorio #6
// Estructuras repetir y para
// Generar las tablas del 1 al 4 tomando en cuenta los valores 1 al 12.
// Problema # 3
// Algoritmo  TablaDeMultiplicar
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // Bloque declarativo  de variable 
     int contador =0;
     int multi, result ;
    
    
    // Bloque de instrucciones
     printf ("\n\t\t\t\t\t\t\t\t\tCICLO REPETIR Y HASTA QUE\t\t\t\t\t\n ");
     printf ("\n\t\t\t\t\t\t\t\tTABLAS DE MULTIPLICAR DEL 1 HASTA AL 4\n\n");
     do
     {
        // Bloque de instrucciones 
        contador = contador + 1 ;
        printf ("\nTABLA DEL  %d\n\n ",contador);
        multi = 0 ;
        do
        {
            // Bloque de instrucciones 
            multi = multi + 1 ;
            result = contador * multi ;
            printf ("%d X %d = %d\n ",contador,multi,result);

        } while (multi < 12);
        
     } while (contador < 4);
     printf ("\nFin del Programa \n\n");

     // comienzan la estructura repetiva para

     // Bloque de instrucciones
     printf ("\n\t\t\t\t\t\t\t\t\t\tCICLO PARA\t\t\t\t\t\n ");

     printf ("\n\t\t\t\t\t\t\t\tTABLAS DE MULTIPLICAR DEL 1 HASTA AL 4\n\n");

     for (contador = 1; contador <= 4 ; contador++)
     {
         // Bloque de instrucciones
         printf ("\nTABLA DEL  %d\n\n ",contador);
         for (multi = 1; multi <= 12 ; multi++)
         {
             // Bloque de instrucciones
             result = contador * multi ;
             printf ("%d X %d = %d\n ",contador,multi,result);

         }
         
     }

     printf ("\nFin del Programa \n\n");
     
system("PAUSE");


    return 0;
}
