/*Buendia Juarez Noel Shadao
Tarea #2
ejercicio #7
precio de un boleto*/
#include <stdio.h>
int main(){
    float precio, estancia, distancia, total, descuento;
    printf("ingrese la distancia a recorrer por ida y vuelta: ");
scanf("%f", &distancia);
printf("ingrese la cantidas de dias de su estancia: ");
scanf("%f", &estancia);

    precio = distancia * 0.23;
    total = precio;

if (distancia>800 && estancia>7){
    descuento = total * 0.3;
    total = total - descuento;
    printf("el costo del viaje redondo es de: $%.3f\n", total);
}else{
    printf("el costo del viaje redondo es de: $%.3f", total);
}
return 0;
}
