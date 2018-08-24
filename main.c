/*
 * Este programa calculara la suma, resta, multiplicación y división dados dos números.
 *
 * Autor: César Alejandro Arias Perales
 * Fecha: 22 de agosto del 2018
 * Correo: a01411995@itesm.mx
 *
 */
#include <stdio.h>

int main() {
    // Declaración de variables
    double num1;
    double num2;
    double suma;
    double resta;
    double multiplicacion;
    double division;

    // Aquí le pido al usuario que me de los dos números
    printf("Hola. Te ayudare a obtener las cuatro operaciones basicas de dos nameros.\n");
    printf("Dame el primer numero.\n");
   scanf_s("%lf", &num1);
    printf("Dame el segundo numero.\n");
    scanf_s("%lf", &num2);

    // Aquí se calculan la suma, resta, multiplicación y división.
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    // Auqí se dan los resultados de las operaciones
    printf("El resultado de la suma es: %lf\n", suma);
    printf("El resultado de la resta es: %lf\n", resta);
    printf("El resultado de la multiplicacion es: %lf\n", multiplicacion);
    printf("El resultado de la division es: %lf\n", division);

    return 0;
}