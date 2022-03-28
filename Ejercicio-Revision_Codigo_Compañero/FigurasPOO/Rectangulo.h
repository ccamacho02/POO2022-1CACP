//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_RECTANGULO_H
#define FIGURASPOO_RECTANGULO_H

#include "Figura.h"
#include "windows.h"

class Rectangulo : public Figura {
private:
    float baseRectangulo;
    float alturaRectangulo;
public:
    Rectangulo();
    Rectangulo(float baseRectangulo, float alturaRectangulo);
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    void mostraFigura(int colorRectangulo);
    float getArea();
};


#endif //FIGURASPOO_RECTANGULO_H
