//Taller # 2
// Problema 2
//Algoritmo NumerosPositivosYNegativos
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // bloque declarativo de variable
    int num ;

    //Bloque de instrucciones

    printf("Ingrese un numero entero para evaluar si es positivo o negativo \n ");
    scanf("%d",&num);

           if (num > 0)
           {
               //Bloque de instrucciones
               printf("El numero %d es Positivo",num);
           }
           else
           {
               if (num < 0)
               {
                   //Bloque de instrucciones
                   printf("El numero %d es Negativo",num);
               }
                else
                {
                    //Bloque de instrucciones
                    printf("El numero ingresado es CERO");
                }
           }

    return 0;
}
