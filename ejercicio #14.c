/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #14
repeticiones de un numero dentro de un arreglo*/

#include <stdio.h>

int main() {
    int n;
    int objetivo;
    int contador = 0;

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
    }

    printf("\nIngresa el numero entero a buscar: ");
    scanf("%d", &objetivo);

    for (int i = 0; i < n; i++) {
        if (arreglo[i] == objetivo) {
            contador++;
        }
    }

    printf("\nEl numero %d aparece %d %s dentro del arreglo.\n",
           objetivo,
           contador,
           (contador == 1) ? "vez" : "veces");

    return 0;
}
