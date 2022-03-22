//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_FIGURA_GEOMETRICA_H
#define EJERCICIO_POLIMORFISMO_FIGURA_GEOMETRICA_H

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

class Figura_Geometrica {
protected:
    float area;
    float perimetro;
public:
    Figura_Geometrica();
    virtual void dibujarFigura();
    virtual float calcularArea();
    virtual float calcularPerimetro();
};


#endif //EJERCICIO_POLIMORFISMO_FIGURA_GEOMETRICA_H
