/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #10
lista 100 numeros*/

#include <stdio.h>

int main() {
    int total_numeros = 100;
    int numero;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    printf("Ingresa %d numeros enteros:\n", total_numeros);

    for (int i = 1; i <= total_numeros; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            printf("  -> Positivo\n");
            positivos++;
        } else if (numero < 0) {
            printf("  -> Negativo\n");
            negativos++;
        } else {
            printf("  -> Nulo (cero)\n");
            nulos++;
        }
    }

    printf("listado final\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos:     %d\n", nulos);

    return 0;
}
