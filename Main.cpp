#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "Validaciones.h"
#include "Fraccion.cpp"
#include "Operaciones.h"

using namespace std;

int main(){
    Fraccion fraccion1,fraccion2,fraccionResult;
    fraccion1.setNum(4);
    fraccion1.setDen(3);
    fraccion2.setNum(2);
    fraccion2.setNum(1);
    // Fraccion fraccion1,fraccion2;
    // fraccion1.setNum(ingresarInt("Ingrese el numerador de la primera fraccion:"));
    // fraccion1.setDen(ingresarInt("Ingrese el denominador de la segunda fraccion:"));
    // fraccion2.setNum(ingresarInt("Ingrese el numerador de la segunda fraccion:"));
    // fraccion2.setNum(ingresarInt("Ingrese el denominador de la segunda fraccion:"));
    fraccionResult=suma(fraccion1,fraccion2);
    cout<<fraccionResult.getNum()+"/"+fraccionResult.getDen();

    return 0;
}