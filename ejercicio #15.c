/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #15
negativos, positivos y nulos en un arreglo*/

#include <stdio.h>

int main() {
    int n;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

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

    for (int i = 0; i < n; i++) {
        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("Resultados del arreglo\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos:     %d\n", nulos);

    return 0;
}
