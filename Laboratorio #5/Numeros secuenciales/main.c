// Laboratorio #5
// Una serie o secuencia de números expresan un patrón de cálculos que determinan el conjunto de números dentro de la llamada serie
// Problema # 2
// Algoritmo  SerieDeNumero
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Bloque declarativo  de variable 
     int contador = 0;
     int unidad = 1 ; 
     int g ;
     // Bloque de instrucciones 

     printf ("\n\t SERIE O SECUENCIA DE N%cMEROS ARITM%cTICOS\t\n\n",233,144);
     while (contador < 7 )
     {
         // Bloque de instrucciones 
         
         /*Serie progresión aritmética  */
         contador = contador + unidad ;
         // Formula  
         g = 1 + (contador -1 ) * 5 ;  // 1 + (n-1)*5

         printf (" %d .", g);

     }
     printf ("\n");

      printf ("\nFin del Programa \n\n");

     system("PAUSE");

    return 0;
}
