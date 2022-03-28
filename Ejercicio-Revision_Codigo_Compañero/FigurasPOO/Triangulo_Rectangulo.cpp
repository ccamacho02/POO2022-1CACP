//
// Created by CARLOS on 27/03/2022.
//

#include "Triangulo_Rectangulo.h"

Triangulo_Rectangulo::Triangulo_Rectangulo() {
    baseTrianguloRectangulo = 0;
    alturaTrianguloRectangulo = 0;
    hipotenusa = 0;
    area = 0;
}

Triangulo_Rectangulo::Triangulo_Rectangulo(float base, float altura, float hipotenusa) {
    this->alturaTrianguloRectangulo = altura;
    this->baseTrianguloRectangulo = base;
    this->hipotenusa = hipotenusa;
}

void Triangulo_Rectangulo::mostraArea() {
    float areaTrianguloRectangulo = (baseTrianguloRectangulo*alturaTrianguloRectangulo)/2;
    area = areaTrianguloRectangulo;
    cout << "Triangulo Rectangulo: " << baseTrianguloRectangulo << "x" << alturaTrianguloRectangulo << "\n";
    cout << "El area del Triangulo Rectangulo es: " << areaTrianguloRectangulo << "\n\n";
}

void Triangulo_Rectangulo::mostraPerimetro() {
    float perimetroTrianguloRectangulo = baseTrianguloRectangulo+alturaTrianguloRectangulo+hipotenusa;
    cout << "Triangulo Rectangulo: " << baseTrianguloRectangulo << "x" << alturaTrianguloRectangulo << "x" << hipotenusa;
    cout << "El perimetro del Triangulo Rectangulo es: " << perimetroTrianguloRectangulo << "\n\n";
}

void Triangulo_Rectangulo::mostraFigura() {
    cout << "Figura del triangulo rectangulo sin color:\n\n";
    for(int i = 1; i <= baseTrianguloRectangulo; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Triangulo_Rectangulo::mostraFigura(int colorTrianguloRectangulo) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int colorBaseTextoTriangulo = 7;
    cout << "Figura del triangulo rectangulo con color:\n\n";
    SetConsoleTextAttribute(hConsole, colorTrianguloRectangulo);
    for(int i = 1; i <= baseTrianguloRectangulo; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    SetConsoleTextAttribute(hConsole, colorBaseTextoTriangulo);
}

float Triangulo_Rectangulo::getArea() {
    return this->area;
}