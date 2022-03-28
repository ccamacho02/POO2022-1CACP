//
// Created by CARLOS on 27/03/2022.
//

#ifndef FIGURASPOO_TRIANGULO_RECTANGULO_H
#define FIGURASPOO_TRIANGULO_RECTANGULO_H

#include "Figura.h"
#include "windows.h"

class Triangulo_Rectangulo : public Figura {
private:
    float baseTrianguloRectangulo;
    float alturaTrianguloRectangulo;
    float hipotenusa;
public:
    Triangulo_Rectangulo();
    Triangulo_Rectangulo(float baseTrianguloRectangulo, float alturaTrianguloRectangulo, float hipotenusa);
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    void mostraFigura(int colorTrianguloRectangulo);
    float getArea();
};


#endif //FIGURASPOO_TRIANGULO_RECTANGULO_H
