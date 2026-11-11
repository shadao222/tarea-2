/*Buendia Juarez Noel Shadao
Tarea #2
ejercicio #4
interes de una inversion*/
#include <stdio.h>
int main(){
    float inversion, interes;

    printf("tasa anual de interes es del 13%\n");
    printf("ingrese la cantidad a invertir: $");
    scanf("%f", &inversion);

    interes = inversion * 0.01083;

    printf("el interes generado mensualmente es: $%.3f\n", interes);
    return 0;
}
