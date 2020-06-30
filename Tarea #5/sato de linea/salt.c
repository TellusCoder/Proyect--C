
//  Tarea # 5
/* Escribir un programa que sea capaz de solicitar un número mayor a 7 y que despliegue el conteo (imprima) 
de los números enteros hasta el valor N suministrado por el usuario.   
Cada línea de impresión debe escribir solo hasta 7 números.  
Y por cada línea debe además imprimir la sumatoria de los valores impresos en esa línea.  
Al final de la secuencia organizada de 7 valores enteros por línea,   el símbolo  =, y el valor de la sumatoria 
de esa línea, el programa debe ser capaz de presentar en una línea más abajo de todo el conjunto de valores enteros impresos.
 el valor de la sumatoria total  del conjunto y  el promedio del conjunto.  */
 // problema # 2
//Algoritmo NúmerosEnteroSecuencia

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 
 int main()
 {
     // Bloque decarativo de variable
     int acum,  n,num,acum1, salto ;
     float medi ;
     // bloque de instrucciones 
     // inicializacion de variable 
      acum = 0;
      acum1 = 0;
      salto = 0;
      printf ("\nIntroduzca un n%cmero entero: ",163);
      scanf(" %d", &num);
      printf ("\n");
      
     if ( num > 7)
     {
         for ( n = 1; n <= num; n = n+1)
      {
          // Bloque de instrucciones 
           printf("%d ",n);
           acum = acum + n;
           acum1 = acum1 + n;
            salto = salto + 1;

        // hacer el salto de linea cada 7 numero
          if (salto == 7)
          {
              // Bloque de instrucciones 
              printf (" = %d \n",acum1);
              acum1 = 0;
              salto = 0;
          }
              
      }
       printf (" = %d \n",acum1);

       printf ("\nLa sumatoria del conjunto entero es: %d  ",acum);
       printf ("\n");
         
       medi = acum / num ;

       printf ("\nEl promedio del conjunto entero es de: %f ",medi);

       printf ("\n\n");

     }
     else 
     {
        printf ("\n error de numero\n ");
     }
     
      
    system ("PAUSE");
     return 0;
 }
 
