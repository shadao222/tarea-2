/*Buendia Juarez Noel Shadao
Tarea #2
ejercicio #5
precio de un producto*/
#include <stdio.h>
int main() {

float monto, descuento, total;
 printf("Ingrese el monto de la compra: ");
 scanf("%f", &monto);

 if (monto >2500){
    descuento = monto * 0.08;
    total = monto - descuento;
    printf("el descuento es de: $%.3f\n", descuento);
    printf("el total a pagar es: $%.3f\n", total);
 }
 else{
    printf("el descuento no aplica\n");
    printf("el total a pagar es: $%.3f\n", monto);
 }
return 0;
}
