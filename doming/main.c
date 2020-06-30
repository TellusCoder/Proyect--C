#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Bloque declarativo de variable
    int anio, a, b, c, d, e, dia, mes, marzo , abri;

    // El usuario debe Ingrese  un año
    printf("\nIngrese el anio\n ");

    scanf ("%d", &anio) ;


// Bloque instrucciones
     if ( anio >= 1000 && anio <= 10000 ) // Controlar lo que introduce  el usuario
{
// Formulas  para saber el dia del domingo de pascua
		a = anio % 19 ;
		b = anio % 4 ;
		c = anio % 7 ;
		d = (19 * a + 24) % 30 ;
		e = (2 * b + 4 * c + 6 * d + 5) % 7 ;
// Para decir cual es dia  de acuerdo al año introducido

    if ( d+e < 10 )
    {
        // Bloque instrucciones
        dia = d + e + 22  ;
		mes = 3 ;
    }
    else
    {
        // Bloque instrucciones
        dia = d + e - 9 ;
		mes = 4 ;
    }
    // Para calcular el año  bisiesto y  mes,dia  del domingo pascual
     switch (mes)
     {
     case 3:
     //
         if (( anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) || (anio % 100==0)) // Formula para calcular el año bisiesto.
         {
             // Bloque instrucciones
            printf ("El domingo de Pascua es : %d de marzo del %d " ,dia, anio);
            printf ("y es anio bisiesto.\n ");
         }
         else
         {
             // Bloque instrucciones
             printf ("El domingo de Pascua es : %d de marzo del %d " ,dia, anio);
             printf ("y no es un anio Bisiesto.\n ");
         }
         break;

     default:

        // expeciones especiales  para el mes de abril  segun wikipedia
        if (dia == 26 )
         {
             // Bloque instrucciones
         dia = 19 ;
         }

        else if (dia == 25  && d == 28 && e== 6 && a > 10)
         {
            // Bloque instrucciones
         dia = 18;
         }
        //
         if (( anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) || (anio % 100==0))
         {
             // Bloque instrucciones
            printf ("\nEl domingo de Pascua es : %d de abril del %d " ,dia, anio);
            printf ("y es anio bisiesto.\n");
         }
         else
         {
             // Bloque instrucciones
             printf ("\nEl domingo de Pascua es : %d de abril del %d " ,dia, anio);
             printf ("y no es un anio Bisiesto.\n");
         }

         break;


     }
    }

     else
     {
         printf ("Error\n");
     }

     printf ("\nFin del programa\n\n") ;

    return;
}
