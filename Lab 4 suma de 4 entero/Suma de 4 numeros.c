#include <stdio.h>
#include <math.h>

/* Algoritmo SumaDeCuatroEnteroo */

 main ()
{
    /* Bloque declarativo de variable */

    int n1, n2, n3, n4, resultado;

     /* Bloque de instrucciones */

    printf("Ingrese el primer numero:\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero:\n");
    scanf("%d", &n3);
    printf("Ingrese el cuarto  numero:\n");
    scanf("%d", &n4);
    resultado = n1 + n2 + n3 + n4;
    printf("El resultado de la suma es: %d\n",resultado);


}
