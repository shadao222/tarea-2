/*Buendia Juarez Noel Shadao
Tarea #2
ejercicio #6
aumento de sueldo*/
#include <stdio.h>
int main() {

    float sueldo, aumento, sueldo_ajustado;

printf("ingrese su sueldo: $");
scanf("%f", &sueldo);

if(sueldo < 1000){
    aumento = sueldo * 0.15;
    printf("su aumento es de: $%.3f\n", aumento);
    sueldo_ajustado = sueldo + aumento;
    printf("su sueldo ajustado es de: $%.3f\n", sueldo_ajustado);
}else{
    aumento = sueldo * 0.12;
    printf("su aumento es de: $%.3f\n", aumento);
    sueldo_ajustado = sueldo + aumento;
    printf("su sueldo ajustado es de: $%.3f\n", sueldo_ajustado);
}
return 0;
}
