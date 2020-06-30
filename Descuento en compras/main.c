#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    // bloque declaritivo de variable
float desc, preciodeentrada, precioFinal ;

// Bloque de Instrucciones
printf ("Ingrese el precio del producto:\n ");
scanf("%f",&preciodeentrada );

desc = preciodeentrada * 0.15 ;
precioFinal = preciodeentrada - desc ;

printf ("El descuento es de: B/.%f\n",desc);

printf("El Precio Final a pagar es: B/.%f\n",precioFinal);

}
