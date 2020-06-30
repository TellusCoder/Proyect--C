#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Bloque declarativo de variable
    float  calificacion1,calificacion2,calificacion3,examenFinal, trabajoFinal, nota,notafinal, examfin, trabfin ;
    float calificacionFinal ;
    // Bloque de instrucción

    printf ("Ingrese la calificación de los parciales:\n");
    scanf("%f", &calificacion1);
    scanf("%f", &calificacion2);
    scanf("%f", &calificacion3);
    printf("Ingrese la calificacion del examen final: \n") ;
    scanf("%f", &examenFinal) ;
    printf("Ingresar la nota del trabajo final:\n ");
    scanf("%f", &trabajoFinal);
    nota = (calificacion1 + calificacion2 +calificacion3)/3 ;
	notafinal = nota * 0.55 ;
	examfin= examenFinal * 0.30 ;
	trabfin = trabajoFinal * 0.15 ;
	calificacionFinal = notafinal + examfin + trabfin ;
	printf("La calificacion final de la materia algoritmo es: %f\n ", calificacionFinal );
}
