/*Buendia Juarez Noel Shadao
Tarea #2
ejercicio #2
perimetro y area de un circulo*/
#include <stdio.h>
#include <math.h>
int main() {
float r, area, circunferencia;

printf("Ingrese el radio del circulo: ");
scanf("%f", &r);

area = M_PI * pow(r, 2);

printf("El area del circulo es: %.3f\n", area);

circunferencia = 2 * M_PI * r;
printf("La circunferencia es %.3f\n", circunferencia);
return 0;
}
