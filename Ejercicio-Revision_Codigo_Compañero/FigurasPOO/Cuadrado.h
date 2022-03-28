//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_CUADRADO_H
#define FIGURASPOO_CUADRADO_H

#include "Figura.h"
#include "windows.h"

class Cuadrado : public Figura {
private:
    float ladoCuadrado;
public:
    Cuadrado();
    Cuadrado(float ladoCuadrado);
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    void mostraFigura(int colorCuadrado);
    float getArea();
};


#endif //FIGURASPOO_CUADRADO_H
