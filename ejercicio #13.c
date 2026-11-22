/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #13
suma de arreglo*/

#include <stdio.h>

int main() {
    int n;
    int suma = 0;

    printf("Ingresa la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("La cantidad de elementos debe ser mayor que 0.\n");
        return 0;
    }

    int arreglo[n];

    printf("Ingresa los %d numeros enteros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
        suma + = arreglo[i];
    }

    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
