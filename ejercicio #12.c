/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #12
producto primos*/

#include <stdio.h>

int main() {
    int n;
    int encontrados = 0;      // Cuantos primos validos llevamos
    int candidato = 2;        // Primer numero natural primo
    long long producto = 1;   // Acumulador de multiplicacion (inicia en 1)

    printf("Ingresa la cantidad de numeros primos (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ingresa un numero entero positivo mayor que 0.\n");
        return 0;
    }

    printf("\nPrimeros %d numeros primos: ", n);

    while (encontrados < n) {
        int es_primo = 1; // 1 = verdadero, 0 = falso

        // Comprobar si 'candidato' tiene algun divisor distinto de 1 y de si mismo
        for (int divisor = 2; divisor * divisor <= candidato; divisor++) {
            if (candidato % divisor == 0) {
                es_primo = 0;
                break;
            }
        }

        if (es_primo) {
            printf("%d", candidato);
            if (encontrados < n - 1) {
                printf(" * ");
            }
            producto *= candidato;
            encontrados++;
        }

        candidato++;
    }

    printf("\nProducto: %lld\n", producto);

    return 0;
}
