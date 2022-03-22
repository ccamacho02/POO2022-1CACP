//
// Created by CARLOS on 20/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_RECTANGULO_H
#define EJERCICIO_POLIMORFISMO_RECTANGULO_H

#include "Figura_Geometrica.h"

class Rectangulo: public Figura_Geometrica{
private:
    float base;
    float altura;
public:
    Rectangulo();
    Rectangulo(float base, float altura);
    void dibujarFigura();
    float calcularArea();
    float calcularPerimetro();
};


#endif //EJERCICIO_POLIMORFISMO_RECTANGULO_H
