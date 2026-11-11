/*Buendia Juarez Noel Shadao
tarea #2
ejercicio #1
operaciones basicas*/
#include <stdio.h>
int main(){
    float a, b;
    float sum, res, mul;
    printf("ingrese los valores para a y b separados por un coma: ");
    scanf("%f, %f", &a, &b);
    sum = a + b;
    res = a - b;
    mul = a* b;
    printf("la suma es: %f\n", sum);
    printf("la resta es: %f\n", res);
    printf("la multiplicacion es: %f\n", mul);
    return 0;
}
