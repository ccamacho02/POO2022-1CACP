//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_CUADRADO_H
#define EJERCICIO_POLIMORFISMO_CUADRADO_H

#include <iostream>
#include "Figura_Geometrica.h"

using std::cin;
using std::cout;

class Cuadrado: public Figura_Geometrica{
private:
    float longitudLado;
public:
    Cuadrado();
    Cuadrado(float longitudLado);
    void dibujarFigura();
    float calcularArea();
    float calcularPerimetro();
};


#endif //EJERCICIO_POLIMORFISMO_CUADRADO_H
