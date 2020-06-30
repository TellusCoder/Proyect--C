// Taller #2
// Problema #1
// Algoritmo DosNumero
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Bloque declarativo de variable
    int n1,n2;
    //Bloque de instrucciones
    printf ("Ingrese el primer numero:\n");
    scanf ("%d",&n1);
    printf ("Ingrese el primer numero:\n");
    scanf ("%d",&n2);
    if (n1>n2)
        {
            //Bloque de instrucciones
            printf ( "El primer numero es: %d es mayor. Que el segundo numero que es: %d",n1,n2);
        }
    else
    {
        if (n2>n1)
            {
                //Bloque de instrucciones
            printf ("El segundo numero es: %d es mayor. Que el primer numero que es: %d",n2,n1 );
        }
        else {
                //Bloque de instrucciones
            printf ("Todas son iguales ");
        }

    }

    return 0;
}
