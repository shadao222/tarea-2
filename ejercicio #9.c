/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #9
tabla de multiplicar*/

#include <stdio.h>

int main() {
    int numero;

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d\n", numero);
    for (int N = 1; N <= 10; N++) {
        printf("%d x %d = %d\n", numero, N, numero * N);
    }

    return 0;
}
