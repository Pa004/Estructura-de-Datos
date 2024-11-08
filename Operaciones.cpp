#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "Fraccion.cpp"

using namespace std;

Fraccion suma(Fraccion fraccion1, Fraccion fraccion2)
{
    Fraccion fraccionResultado;
    int num = fraccion1.getNum() * fraccion2.getDen() + fraccion2.getNum() * fraccion1.getDen();
    int den = fraccion1.getDen() * fraccion2.getDen();
    fraccionResultado.setNum(num);
    fraccionResultado.setDen(den);
     return fraccionResultado;
}