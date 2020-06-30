// Taller # 2
//Problemas 5
//Algoritmo TresNumeroOrdenado
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Bloque declarativo de variables

    int n1,n2,n3;

    //Bloque de instrucciones

    printf("Ingrese el primer numero:\n");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero:\n ");
    scanf("%d", &n3);

    if (n1 == n2 && n2==n3 && n1==n3)
    {
        //Bloque de instrucciones
        printf("Todas son iguales" );
    }
    else
    {
        if (n1 > n2 && n1 >n3)
        {
            if (n2 > n3)
            {
                //Bloque de instrucciones
                printf("El orden de mayor a menor: %d, %d, %d ",n1, n2, n3 );
            }
            else
            {

            //Bloque de instrucciones
                printf("El orden de mayor a menor: %d, %d, %d ",n1, n3, n2);
            }
        }
        else
        {

            if (n2 > n1 && n2 >n3)
        {
            if (n1 > n3)
            {
                //Bloque de instrucciones
                printf("El orden de mayor a menor: %d, %d, %d ",n2, n1, n3 );
            }
            else
            {

            //Bloque de instrucciones
                printf("El orden de mayor a menor: %d, %d, %d ",n2, n3, n1);
            }
        }
        else
        {

            if (n3 > n1 && n3 >n2)
        {
            if (n1 > n2)
            {
                //Bloque de instrucciones
                printf("El orden de mayor a menor: %d, %d, %d ",n3, n1, n2 );
            }
            else
            {

            //Bloque de instrucciones
                printf("El orden de mayor a menor: %d, %d, %d ",n3, n2, n1);
            }
        }

        }

        }

    }

    return 0;
}
