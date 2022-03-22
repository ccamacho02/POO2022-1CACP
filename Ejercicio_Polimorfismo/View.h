//
// Created by CARLOS on 20/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_VIEW_H
#define EJERCICIO_POLIMORFISMO_VIEW_H

#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Figura_Geometrica.h"

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;


class View {
private:
    vector<Figura_Geometrica*> vectorFigura;
    vector<Figura_Geometrica*> vectorDibujo;
public:
    int menu();
    void principal();
    void agregarFigura();
    void dibujarFigura();
    void mostrarAreaFigura();
    void mostrarPerimetroFigura();
    void mostrarSumaAreas();

};


#endif //EJERCICIO_POLIMORFISMO_VIEW_H
