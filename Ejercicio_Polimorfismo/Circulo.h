//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_CIRCULO_H
#define EJERCICIO_POLIMORFISMO_CIRCULO_H

#include "Figura_Geometrica.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;

class Circulo: public Figura_Geometrica {
private:
    float radio;
public:
    Circulo();
    Circulo(float radio);
    void dibujarFigura();
    float calcularArea();
    float calcularPerimetro();
};


#endif //EJERCICIO_POLIMORFISMO_CIRCULO_H
