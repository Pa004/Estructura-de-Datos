#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

// Función para ingresar un número entero
int ingresarInt(const char *msj)
{
    printf("%s", msj);
    char cad[20], c;
    int i = 0;
    while ((c = getch()) != 13)
    { // Leer hasta que presione Enter
        if (c >= '0' && c <= '9')
        {
            printf("%c", c);
            cad[i++] = c;
        }
        else if (c == 8)
        {
            cad[i] = 0;
            i--;
            putchar(8);
            putchar(32);
            putchar(8);
        }
    }

    cad[i] = '\0';
    return atoi(cad); // Convertir la cadena a entero
}

// Función para ingresar un número flotante
float ingresarFloat(const char *msj)
{
    printf("%s", msj);
    char cad[20], c;
    int i = 0;
    bool hasDot = false;
    while ((c = getch()) != 13)
    { // Leer hasta que presione Enter
        if ((c >= '0' && c <= '9') || (c == '.' && !hasDot))
        {
            printf("%c", c);
            if (c == '.')
                hasDot = true;
            cad[i++] = c;
        }
        else if (c == 8)
        {
            cad[i] = 0;
            i--;
            putchar(8);
            putchar(32);
            putchar(8);
        }
    }
    cad[i] = '\0';
    return atof(cad); // Convertir la cadena a flotante
}

// Función para ingresar un número de doble precisión
double ingresarDouble(const char *msj)
{
    printf("%s", msj);
    char cad[20], c;
    int i = 0;
    bool hasDot = false;
    while ((c = getch()) != 13)
    { // Leer hasta que presione Enter
        if ((c >= '0' && c <= '9') || (c == '.' && !hasDot))
        {
            printf("%c", c);
            if (c == '.')
                hasDot = true;
            cad[i++] = c;
        }
        else if (c == 8)
        {
            cad[i] = 0;
            i--;
            putchar(8);
            putchar(32);
            putchar(8);
        }
    }
    cad[i] = '\0';
    return strtod(cad, nullptr); // Convertir la cadena a doble precisión
}

// Función para ingresar una cadena de caracteres
void ingresar(const char *msj, char *str, int size)
{
    printf("%s", msj);
    char c;
    int i = 0;
    while ((c = getch()) != 13 && i < size - 1)
    { // Leer hasta que presione Enter o se alcance el tamaño máximo
    
        if (isprint(c))
        { // Solo caracteres imprimibles
            printf("%c", c);
            str[i++] = c;
        }
        else if (c == 8)
        {
            str[i] = 0;
            i--;
            putchar(8);
            putchar(32);
            putchar(8);
        }
    }
    str[i] = '\0'; // Terminar la cadena con el carácter nulo
}
