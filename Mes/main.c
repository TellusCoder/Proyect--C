/* Problema: pida al usuario que introduzca el numero del mes que le gusta de año
occidental (1-12). Imprimir la cantidad de dias que posee el mes seleccioonado */

// Algoritmo MesPreferidoTienes

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes , cantdias, anio ;

    printf("Ingrese el numero de su mes preferido (1 a 12)\n");
    scanf("%d", &mes);
    printf("Introduzca el anio\n");
    scanf("%d", &anio);

    switch (mes)
    {
        case 1:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Enero " );
              printf("es un anio bisiesto ");
              cantdias = 31 ;
            }
            else
            {
            printf("\n Enero ");
            printf("no es un anio bisiesto ");
            cantdias = 31 ;
            }
                break ;

        case 2:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Febrero ");
              printf("es un anio bisiesto ");
              cantdias = 29 ;
            }
            else
            {
            printf("\n Febrero " );
            printf("no es un anio bisiesto ");
            cantdias = 28 ;
            }
                break ;

        case 3:
             if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Marzo ");
              printf("es un anio bisiesto ");
              cantdias = 31 ;
            }
            else
            {
            printf("\n Marzo " );
            printf("no es un anio bisiesto ");
            cantdias = 31 ;
            }
                break ;

        case 4:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Abril ");
              printf("es un anio bisiesto ");
              cantdias = 30 ;
            }
            else
            {
            printf("\n Abril ");
            printf("no es un anio bisiesto ");
            cantdias = 30 ;
            }
                break ;

        case 5:
             if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Mayo " );
              printf("es un anio bisiesto ");
              cantdias = 31 ;
            }
            else
            {
            printf("\n Mayo " );
            printf("no es un anio bisiesto ");
            cantdias = 31 ;
            }
                break ;

        case 6:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Junio ");
              printf("es un anio bisiesto ");
              cantdias = 30 ;
            }
            else
            {
            printf("\n Junio ");
            printf("no es un anio bisiesto ");
            cantdias = 30 ;
            }
                break ;

        case 7:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Julio " );
              printf("es un anio bisiesto ");
              cantdias = 31 ;
            }
            else
            {
            printf("\n Julio " );
            printf("no es un anio bisiesto ");
            cantdias = 31 ;
            }
                break ;

        case 8:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Agosto ");
              printf("es un anio bisiesto ");
              cantdias = 31 ;
            }
            else
            {
            printf("\n Agosto ");
            printf("no es un anio bisiesto ");
            cantdias = 31 ;
            }
                break ;

        case 9:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Septiembre ");
              printf("es un anio bisiesto ");
              cantdias = 30 ;
            }
            else
            {
            printf("\n Septiembre ");
            printf("no es un anio bisiesto ");
            cantdias = 30 ;
            }

                break ;

        case 10:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Octubre ");
              printf("es un anio bisiesto ");
              cantdias = 31 ;
            }
            else
            {
            printf("\n Octubre " );
            printf("no es un anio bisiesto ");
            cantdias = 31 ;
            }
                break ;

        case 11:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Noviembre ");
              printf("es un anio bisiesto ");
              cantdias = 30 ;
            }
            else
            {
            printf("\n Noviembre ");
            printf("no es un anio bisiesto ");
            cantdias = 30 ;
            }
                break ;

        case 12:
            if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 || anio % 100 == 0 )
            {
              printf("\n Diciembre " );
              printf("es un anio bisiesto ");
              cantdias = 31 ;
            }
            else
            {
            printf("\n Diciembre " );
            printf("no es un anio bisiesto ");
            cantdias = 31 ;
            }

                break ;

         default :

                 cantdias = 0;
                 break ;

    }

    if ( cantdias < 28 )
    {
        printf("mes incorrecto");
    }
    else
    {
    printf("y es tu mes preferido ");

    printf("y tiene %d dias \n", cantdias);
    }

    return 0;

}
