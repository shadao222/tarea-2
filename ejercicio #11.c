/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #11
pares impares suma*/
#include <stdio.h>

int main() {
    int inicio = 10;
    int fin = 50;
    int suma = 0;

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    printf("La suma de los numeros pares entre %d y %d es: %d\n", inicio, fin, suma);

    return 0;
}
