//
// Created by CARLOS on 17/03/2022.
//

#include "Cuadrado.h"

Cuadrado::Cuadrado() {
    longitudLado = 0;
}

Cuadrado::Cuadrado(float longitudLado) {
    this->longitudLado = longitudLado;
}

void Cuadrado::dibujarFigura() {
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i == 0 || j == 0 || i == 5 || j == 5){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Cuadrado::calcularArea() {
    area = longitudLado*longitudLado;
    cout << "El area del cuadrado es: " << area << "\n";
    return area;
}

float Cuadrado::calcularPerimetro() {
    perimetro = longitudLado*4;
    cout << "El perimetro del cuadrado es: " << perimetro << "\n";
    return perimetro;
}