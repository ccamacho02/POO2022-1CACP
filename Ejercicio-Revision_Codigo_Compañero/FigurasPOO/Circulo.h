//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_CIRCULO_H
#define FIGURASPOO_CIRCULO_H

#include "Figura.h"
#include "windows.h"
#include <math.h>

class Circulo : public Figura{
private:
    float radio;
public:
    Circulo();
    Circulo(float radio);
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    void mostraFigura(int colorCirculo);
    float getArea();
};


#endif //FIGURASPOO_CIRCULO_H
