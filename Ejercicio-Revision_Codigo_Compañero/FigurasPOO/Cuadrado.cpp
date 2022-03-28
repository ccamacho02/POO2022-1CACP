#include "Cuadrado.h"

Cuadrado::Cuadrado(){
    ladoCuadrado = 0;
    area = 0;
}
Cuadrado::Cuadrado(float lado){
    this->ladoCuadrado = lado;
}
void Cuadrado::mostraArea(){
    float areaCuadrado = ladoCuadrado*ladoCuadrado;
    area = areaCuadrado;
    cout << "Cuadrado: " << ladoCuadrado << "x" << ladoCuadrado << "\n";
    cout << "El area del cuadrado es: " << areaCuadrado << "\n\n";
}
void Cuadrado::mostraPerimetro(){
    float perimetroCuadrado = ladoCuadrado*4;
    cout << "Cuadrado: " << ladoCuadrado << "x" << ladoCuadrado << "\n";
    cout << "El perimetro del cuadrado es: " << perimetroCuadrado << "\n\n";
}
void Cuadrado::mostraFigura(){
    cout << "Figura del cuadrado sin color: " << ladoCuadrado << "x" << ladoCuadrado << "\n\n";
    for (int i = 1; i <= ladoCuadrado; i++) {
        for (int j = 1; j <= ladoCuadrado; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Cuadrado::mostraFigura(int colorCuadrado) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int colorBaseTextoCuadrado = 7;
    cout << "Figura del cuadrado con color:\n\n";
    SetConsoleTextAttribute(hConsole, colorCuadrado);
    for(int i = 1; i <= ladoCuadrado; i++){
        for(int j = 1; j <= ladoCuadrado; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    SetConsoleTextAttribute(hConsole, colorBaseTextoCuadrado);
}

float Cuadrado::getArea(){
    return this->area;
}

