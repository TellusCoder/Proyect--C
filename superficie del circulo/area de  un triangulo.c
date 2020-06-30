#include <stdio.h>
#define PI 3.1416

/*Algoritmo SuperficeCirculo*/

main ()

{
  /* Bloque declarativo de variable */

  float superficie , radio ,  resultado;

  /*Bloque de Instrucciones*/

  printf("Bienvenido al programa de superficie \n\n") ;
  printf("Ingresar el valor del radio: ");
  scanf ("%f",&radio);

  resultado = PI *(radio * radio );

  printf ("La superficie  del circulo cuyo radio es  %.4f  debe estar en: %.4f \n",radio, resultado );

}
