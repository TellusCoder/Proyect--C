// Tareas #4
// Crea una aplicación que pida un número y calcule su factorial
// Problema # 1
// Algoritmo  Factorial


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    // Bloque declarativo  de variable
    long int  num, fact,n;
    char respu = 's' ;

    // Bloque de instrucciones
     
    // titulo
    printf ("\n\t\t\t\t\t APLICACI%cN EL FACTORIAL \t\t\t\t\t\n",224);

    do
    {
    
     // Solicitar numero para calcular el factorial
     printf("\nIntroduzca un n%cmero para calcular el factorial: ",163);
     scanf(" %d", &num);
    
     fact = 1; // inicializacion de la variable 
     printf("\nEl factoral de  %d = " ,num);
     // Calcular el factorial 
     for (n = 1; n <= num ; n+=1)
   {
     // Bloque de instrucciones

     fact = fact * n;

     if (n < num)
     {
       // Bloque de instrucciones
       printf(" %d x ",n);
     }
     
   }

    printf("%d = %d \n\n ",num,fact);
    printf ("Desea continuar en la aplicacion?, Si / No : ");
    scanf ("\t%s",&respu);

   
  } while (respu == 's');

   
     printf ("\nFin del Programa \n\n");
    

     system("PAUSE");

     return 0; 

}