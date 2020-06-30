// Laboratorio #6
// Estructuras repetir y para
// Escriba un programa que imprima los valores enteros en secuencia de pares del 22 al 104 un valor por línea.
// Problema # 1
// Algoritmo  SecuenciaDePares

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Bloque declarativo  de variable

    int contador = 22 ;

    // Bloque de instrucciones
    printf ("\n\t\t\tCICLO REPETIR Y HASTA QUE \t\t\t\n ");

    printf ("\n\t\tSECUENCIA DE N%CMEROS PARES DEL 22 AL 104\t\t\n",233);
    
    do
    {
        // Bloque de instrucciones
         printf ("\n%d",contador);
         contador = contador + 2;
    

    } while (contador <= 104 );
    
     printf ("\n");

     printf ("\nFin del Programa\n\n");
     // comienzan la estructura repetiva para 
     // Bloque de instrucciones
     printf ("\n\t\t\t\tCICLO PARA\t\t\t\n ");
    
     printf ("\n\t\tSECUENCIA DE N%CMEROS PARES DEL 22 AL 104\t\t\n",233);

    for (contador = 22; contador <= 104; contador+=2)
    {
        // Bloque de instrucciones 
         printf ("\n%d",contador);
        
           
    }
     printf ("\n");
    
     printf ("\nFin del Programa\n\n");

    system ("PAUSE");

    return 0;
}
