#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Bloque Declarativa de variables
       int i ;
    // Bloque de instrucciones
     printf ("\nLos n%cmeros impares del 11 al 65 son: ",163);
     for ( i = 11; i <= 65 ; i = i + 2)
     {
         printf(" %d ",i);
     }
     printf ("\n");
      system ("PAUSE");
    return 0;
}
