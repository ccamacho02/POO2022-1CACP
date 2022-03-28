//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_VIEW_H
#define FIGURASPOO_VIEW_H

#include <iostream>
#include <vector>
#include "windows.h"
#include "Figura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Triangulo_Rectangulo.h"

using namespace std;

class View {
private:
    vector<Figura*> figurasVector;
public:
    void combinarReferencias();
    void agregarCirculo();
    void agregarCuadrado();
    void agregarRectangulo();
    void agregarTrianguloRectangulo();
    void mostrarAreas();
    void mostrarPerimetros();
    void mostrarFiguras();
    void mostrarFiguras(int colorGeneral);
    void mostrarSumaAreas();
    int seleccionarColor();
};


#endif //FIGURASPOO_VIEW_H
