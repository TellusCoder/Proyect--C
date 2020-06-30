//Taller # 2
// Problema 3
// Algoritmo Division

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Bloque declarativo de variables
    float num1, num2 ;
    float resultado;

    //Bloque de instrucciones

    printf("Ingrese un numero entero para el dividendo: \n");
    scanf("%f", &num1);
    printf("Ingrese un numero entero para el divisor: \n");
    scanf("%f", &num2);

    if (num2== 0)
        {
            //Bloque de instrucciones
        printf("No se puede realizarse la division");
    }
    else
    {
        //Bloque de instrucciones
        resultado= num1/num2;
       printf("El resultado de la division es: %f\n ", resultado);
    }
    return 0;
}
