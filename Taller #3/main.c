#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ 
    system ("color f0");
    // bloque declarativo de variable
    int num = 0, num1 = 0, menu;
    double divi ;
    //bloque  instruciones 
    do{
       
        //bloque de instrcuiones 
        printf ("\n\t\t MEN%c \t\t\n\n",233);

        printf ("\n 1 - Suma \n 2 - resta \n 3 - multiplicar \n 4 - dividir \n 5 - multiplo \n 6 - potencia");
        printf ("\n 7 - salir\n");

        //Escoger una opción del menu  
        printf ("\n Elija una opci%cn : ",162);
        scanf ("%d", &menu);
    
            if (menu >= 1  && menu <= 6)
            {
                //bloque de instrucciones 
                 printf ("\nIngrese un valor entero: ");
                 scanf ("%d", &num);
                 printf ("Ingrese un segundo valor entero: ");
                 scanf ("%d", &num1);

                switch (menu)
    {
    case 1:
        //Bloque de instrucciones
         printf ("\n El resultado de la suma  %d + %d es: %d\n ",num, num1, num + num1);
         printf ("\n");
         system ("PAUSE");
         system ("cls");
        break;
    case 2:

        // bloque de instrucciones 
        printf ("\n El resultado de la resta %d - %d es: %d\n ",num, num1, num - num1);
        printf ("\n");
        system ("PAUSE");
        system ("cls");
         break;
    case 3:
          //bloque de instruciones 
         printf ("\n El resultado de la multipliaci%cn %d x %d es: %d\n ",162,num, num1, num * num1);
         printf ("\n");
         system ("PAUSE");
         system ("cls");
           break;
    case 4:
        // bloque de instrucciones 
        if (num1 == 0)
        {
            printf ("\n Error matematico \n");
        }
        else
        {
           divi = (double) num / num1;
            printf ("\nEl resultado de la divsi%cn %d / %d es: %.1f\n ", 162 ,num, num1, divi);
        }
          printf ("\n");
          system ("PAUSE");
          system ("cls");
          break;
    case 5:
         
         if (num % num1 == 0)
         {
            // Bloque de instrucciones 
             printf ("\n %d es multiplo de %d", num ,num1);
         }
         else
         {
             printf ("\n %d no es multiplo %d ", num , num1);
         }
            printf ("\n");
           system ("PAUSE");
           system ("cls");
            break;
    case 6:
         //bloque de instrucciones 
         printf ("\n %d elevado a la 2 es : %.f y %d elevado a la 2 es : %.f ",num, pow (num, 2),num1 ,pow (num1, 2));
         printf ("\n");
         system ("PAUSE");
        system ("cls");
        break;
        default:
          system ("cls");
        break;
    }
            }
            system ("cls");
         }while(menu != 7);

    printf ("Fin del programa\n\n") ; 

    return 0;
}