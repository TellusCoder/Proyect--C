// Laboratorio #5
// Escriba un programa que imprima los valores enteros en secuencia de pares del 22 al 104 un valor por línea.
// Problema # 1
// Algoritmo  SecuenciaDePares

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    // Bloque declarativo  de variable 
    int contador = 21 ;
    int unidad = 1 ;
     int parono ;
      // Bloque de instrucciones 
     printf ("\n\t\tSECUENCIA DE N%CMEROS PARES DEL 22 AL 104\t\t\n",233);
    
     while (contador < 104)
     {
         // Bloque de instrucciones 

         contador =  contador + unidad ;
         parono = contador % 2 ;
         if (parono == 0)
         {
             // Bloque de instrucciones 
             printf ("\n%d.",contador );
         }   
     }
     printf ("\n");

     printf ("\n Fin del Programa\n\n");
     system("PAUSE");
    return 0;
}
