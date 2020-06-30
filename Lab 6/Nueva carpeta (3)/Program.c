#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // bloque declarativo de variable 
    int  salto = 0, i ;
    // bloque de instrucciones

     printf ("\n\t\t Salto de Linea de 10 N%cmero Par \t\t\n\n",163);

    for ( i = 0; i <= 1200; i= i+2)
    {
        // Bloque de instruciones 
        printf (" %d ",i);
        salto = salto + 1 ;
        if (salto == 10)
        {
            //bloue de instrucciones 
            printf ("\n");
            salto = 0;
        }
        
    }
    printf("\n\n");
    
    system ("PAUSE");

    return 0;
}
