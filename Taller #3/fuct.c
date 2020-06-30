#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

//funcion para suma
int suma (int num, int num1)
{   
    // bloque de instrucciones    
         return  num + num1 ;
}
//funcion para resta
int  resta (int num, int num1)
{
     // bloque de instrucciones
        return num -num1 ;
}

//funcion para multiplicacion 
int   multiplicar (int num, int num1)
{
          // bloque de instrucciones
          return num * num1;
}
//funcion para division 
float  dividir (float num, float num1)
{
       // bloque de instrucciones
          return  num / num1;
}
void body ()
{
    //Bloque de instrucciones
          printf ("\n");
          system ("PAUSE");
          system ("cls");      
}
// prototipo de funcion multiplo
int multiplo (int num, int num1);
// prototipo de funcion  para potencia
float potencia (int result);
// prototipo de funcion  para el menu
void menu ();

int main()
{
    system ("color f0"); 
        
    // bloque de instrucciones 
    // llamado de la funcion       
      menu ();

    return 0;
}

//funcion para el menu
void menu ()
{
    // bloque declartivo de variable 
       int a = 0, b = 0, mui = 0 ,opciones, result  ;

    do 
    {
        //Bloque de instrucciones 
        printf ("\n\t\t MEN%c \t\t\n\n",233);

        printf ("\n 1 - Suma \n 2 - resta \n 3 - multiplica \n 4 - dividir \n 5 - multiplo \n 6 - potencia");
        printf ("\n 7 - salir\n");

        printf ("\n Elija una opci%cn : ",162);
        scanf ("%d", &opciones);
        
        if (opciones >= 1 && opciones <= 6)
        {
            //Bloque de instrucciones 
         printf ("\nIngrese un valor entero: ");
         scanf ("%d", &a);
         printf ("Ingrese un segundo valor entero: ");
         scanf ("%d", &b);

            switch (opciones)
    {
    case 1:
        //Bloque de instrucciones
         printf ("\n El resultado de la suma  %d + %d es: %d\n ", a,b, suma (a, b) );
         body () ;
         break;
    case 2:
        // bloque de instrucciones 
         printf ("\n El resultado de la resta %d - %d es: %d\n ",a, b,resta (a, b) );
         body () ;
         break;
    case 3:
          //bloque de instruciones 
          printf ("\n El resultado de la multipliaci%cn %d x %d es: %d\n ",162,a, b, multiplicar (a,b));
          body () ;
          break;
    case 4:
        // bloque de instrucciones 

        if (b == 0)
        {
            printf ("\n Error matematico \n");
        }
        else
        {
            printf ("\nEl resultado de la divsi%cn %d / %d es: %.1f\n ", 162 ,a, b, dividir (a,b));
        }
         body () ;
         break;
    case 5:
         //Bloque de instrucciones
         mui = multiplo (a,b) ;
         if (mui == 0)
         {
            // Bloque de instrucciones 
             printf ("\n %d es multiplo de %d", a ,b);
         }
         else
         {
             //Bloque de instrucciones
             printf ("\n %d no es multiplo %d ", a , b);
         }
           body () ;
           break;
    case 6:
         //bloque de instrucciones 
         result = a + b; 
         printf ("\n %d elevado a la 2 es  : %.f\n ",result, potencia (result));
         body () ;
         break;
    default:
          system ("cls");
        break;
    }
        } 
          system ("cls");           
     }while (opciones != 7); 
   printf ("Fin del programa\n\n") ;
}
//funcion para  multiplo de n numero 
int multiplo (int num, int num1)
{
    // bloque de instrucciones    
        return num % num1;
}
//funcion para  la potencia 
float  potencia (int result)
{   
    // bloque de instrucciones
     return pow (result, 2);
}