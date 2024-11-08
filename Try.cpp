

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "Validaciones.h"


int main()
{
    int entero = ingresarInt("Ingrese un valor entero: ");
    printf("\nValor entero ingresado: %d\n", entero);

    float flotante = ingresarFloat("Ingrese un valor flotante: ");
    printf("\nValor flotante ingresado: %.2f\n", flotante);

    double doble = ingresarDouble("Ingrese un valor doble: ");
    printf("\nValor doble ingresado: %.5lf\n", doble);

    char cadena[50];
    ingresar("Ingrese una cadena de caracteres: ", cadena, 50);
    printf("\nCadena ingresada: %s\n", cadena);

    return 0;
}