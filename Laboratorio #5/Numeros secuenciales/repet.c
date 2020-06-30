// Laboratorio #6
// Estructuras repetir y para
// Una serie o secuencia de números expresan un patrón de cálculos que determinan el conjunto de números dentro de la llamada serie
// Problema # 2
// Algoritmo  SerieDeNumero
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Bloque declarativo  de variable 
     int  contador = 1;
    
    // Bloque de instrucciones
     printf ("\n\t\tCICLO REPETIR Y HASTA QUE\t\t\t\n ");
     printf ("\n\t SERIE O SECUENCIA DE N%cMEROS ARITM%cTICOS\t\n\n",233,144);
    do
    {
        // Bloque de instrucciones
         printf (" %d .", contador);

         contador = contador + 5;

    } while (contador <= 34);
     printf ("\n");

     printf ("\nFin del Programa \n\n");

     // comienzan la estructura repetiva para

     // Bloque declarativo  de variable 

     int g ; 

     // Bloque de instrucciones
      
     printf ("\n\t\t\tCICLO PARA\t\t\t\n ");

     printf ("\n\t SERIE O SECUENCIA DE N%cMEROS ARITM%cTICOS\t\n\n",233,144);
      
    for (g = 1; g <= 34; g+=5)
    {
        // Bloque de instrucciones
      
         printf (" %d .",g);
        
        
    }
     printf ("\n");

     printf ("\nFin del Programa \n\n");
     
     system("PAUSE");
    
    return 0;
}

