#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Bloque decarativo de variable 
     int i, v, num , acum = 0;
     char respu = 's' ;

     // bloque de instrucciones 
     do
     {
     printf ("\n Ingrese un  valor entero de 1 a 12: ");
     scanf ("%d", &num);
    
     if (num >=1 && num <= 12)
     {
         printf ("\n El Valor absoluto  es %d : ",num);
         //bloque de instrucciones 
         for ( v =1; v <= num ; v++)
         {
             //Bloque de instruciones 
             for (i = 1; i <=v; i++)
             {
                 //bloque de instrucciones 
                 printf (" %d ",v);
                 acum = acum + v;
                 
             }         
         }
         
         printf (" . La suma es: %d\n ",acum);
     }
     else
     {
         printf("No es un valor  solicitado");
     }
     
     printf ("\n");
      acum = 0;
     printf ("Desea continuar en el programa?, Si / No : ");
     scanf ("\t%s",&respu);
     } while (respu == 's');

     system ("PAUSE");

    return 0;
}
