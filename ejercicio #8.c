/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #8
divisores*/
#include <stdio.h>

int main() {
    int num1, num2;
    int Divisor = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0) {
        printf("Error: No se permite ingresar el numero 0 porque la division entre cero no esta definida.\n");
        return 1;
    }

    if (num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
        Divisor = 1;
    }

    if (num1 != num2 && num2 % num1 == 0) {
        printf("%d es divisor de %d\n", num1, num2);
        Divisor = 1;
    }

    if (!Divisor) {
        printf("Ninguno de los dos numeros es divisor del otro.\n");
    }

    return 0;
}
