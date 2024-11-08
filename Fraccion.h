/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  Steven Egas, Pablo Dominguez, Esteban Santos
 * Modified: miercoles, 6 de noviembre de 2024 23:07:08
 * Purpose: Implementation of the class Fraccion
 * Nrc:1992
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS
 ***********************************************************************/

#if !defined(__ClassDiagram_1_Fraccion_h)
#define __ClassDiagram_1_Fraccion_h

class Fraccion
{
public:
   int getNum(void);
   void setNum(int newNum);
   int getDen(void);
   void setDen(int newDen);
   Fraccion();
   ~Fraccion();

protected:
private:
   int Num;
   int Den;


};

#endif