/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #16
almacenar primeros 100 numeros pares en un arreglo*/

#include <stdio.h>

#define TOTAL_PARES 100

int main() {
    int pares[TOTAL_PARES];

    for (int i = 0; i < TOTAL_PARES; i++) {
        pares[i] = (i + 1) * 2;
    }

    printf("Los %d primeros numeros pares son:\n", TOTAL_PARES);
    for (int i = 0; i < TOTAL_PARES; i++) {
        printf("%d", pares[i]);

        if (i < TOTAL_PARES - 1) {
            printf(", ");
        }
        
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
