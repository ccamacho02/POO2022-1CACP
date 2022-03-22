//
// Created by CARLOS on 17/03/2022.
//

#include "Circulo.h"

Circulo::Circulo() {
    radio = 0;
}

Circulo::Circulo(float radio) {
    this->radio = radio;
}

void Circulo::dibujarFigura() {
    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){
            if(pow(j - 5, 2.0) + pow(i - 5, 2.0) <= pow(5, 2.0)){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Circulo::calcularArea() {
    area = M_PI * pow(radio, 2.0);
    cout << "El area del circulo es: " << area << "\n";
    return area;
}

float Circulo::calcularPerimetro() {
    perimetro = 2 * M_PI * radio;
    cout << "El perimetro del circulo es: " << perimetro << "\n";
    return perimetro;
}