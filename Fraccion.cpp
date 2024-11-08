/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  Steven Egas, Pablo Dominguez, Esteban Santos
 * Modified: miercoles, 6 de noviembre de 2024 23:07:08
 * Purpose: Implementation of the class Fraccion
 * Nrc:1992
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS
 ***********************************************************************/

#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNum()
// Purpose:    Implementation of Fraccion::getNum()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getNum(void)
{
   return Num;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNum(int newNum)
// Purpose:    Implementation of Fraccion::setNum()
// Parameters:
// - newNum
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNum(int newNum)
{
   Num = newNum;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDen()
// Purpose:    Implementation of Fraccion::getDen()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getDen(void)
{
   return Den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDen(int newDen)
// Purpose:    Implementation of Fraccion::setDen()
// Parameters:
// - newDen
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDen(int newDen)
{
   Den = newDen;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Implementation of Fraccion::Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}