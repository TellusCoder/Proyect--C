//Problema #1
// Algoritmo SerieFibonacci

#include <stdio.h>   
#include <stdlib.h> 
int main()    
{    
    //bloque declarativo de variable 
    int n1,n2,n3,n,num;  
     // bloque de instrucciones 
     n1=0;
     n2=1;
     printf("\nIngrese el  un valor de n: ");    
     scanf("%d",&num);    
     printf("\n Serie Fibonacci: %d %d",n1,n2);
    for ( n = 2; n < num; n = n + 1)
    {
        //Bloque de instrucciones 
         n3=n1+n2;    
         printf(" %d",n3);
         n1=n2;    
         n2=n3;
    }
         printf ("\n");
         system ("PAUSE");
         return 0;  
 }    