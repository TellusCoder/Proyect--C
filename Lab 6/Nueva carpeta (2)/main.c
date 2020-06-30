#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Bloque declarativo de variable 
     int i;

    // Bloque de instrucciones 
      printf ("\n\t\t Los Multiplos de 4 \t\t\n");
      printf ("\n Los multiplos de 4 del 14 hasta 67 son: ");
    for (size_t i = 14; i <=67; i = i + 1)
    {
        //Bloque de instrucciones 
        if (i%4==0)
        {
            printf (" %d ",i);
        }
        
    }
    printf ("\n\n");
    system ("PAUSE");

    return 0;
}
