#include <stdio.h>

/* Algoritmo QuienSoy */

main()
{

/*Bloque Declarativa de Variables */

char  nomb[20], pasatiem [60];
int  cedu;

/* Bloque de Instrucciones */

puts("Ingrese el nombre: ");  /* imprimir una  */
scanf(" %[^\n]", &nomb);                     /* leer la Variable */
puts("Ingrese la cedula: ");
scanf("%d", &cedu);
puts("Ingrese el  pasatienpo: ");
scanf(" %[^\n]", &pasatiem);
printf("Mi nombre es: %s\n", nomb);
printf("Mi cedula  es: %d\n", cedu);
printf("Mi pasatiempo  es: %s\n", pasatiem);


}


