#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   //bloque declarativos de variable
float C,a,b ;
//bloque de instrucciones
printf ("Ingrese el cateto de a:\n");
scanf ("%f", &a);
printf ("Ingrese el cateto de b:\n");
scanf ("%f",&b);
C= sqrt ((a*a) +(b*b));  // raiz2 o sqrt para decir  raíz cuadrada
printf("La hipotenusa de un triangulo rectangulo es: %f\n",C);


}
