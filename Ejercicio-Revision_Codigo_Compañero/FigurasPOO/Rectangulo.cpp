#include "Rectangulo.h"

Rectangulo::Rectangulo(){
    baseRectangulo = 0;
    alturaRectangulo = 0;
    area = 0;
}
Rectangulo::Rectangulo(float base, float altura){
    this -> baseRectangulo = base;
    this -> alturaRectangulo = altura;
}
void Rectangulo::mostraArea(){
    float areaRectangulo = baseRectangulo*alturaRectangulo;
    area = areaRectangulo;
    cout << "Rectangulo: " << baseRectangulo << "x" << alturaRectangulo << "\n";
    cout << "El area del rectangulo es: " << areaRectangulo << "\n\n";
}
void Rectangulo::mostraPerimetro(){
    float perimetroRectangulo = (baseRectangulo*2) + (alturaRectangulo*2);
    cout << "Rectangulo: " << baseRectangulo << "x" << alturaRectangulo << "\n";
    cout << "El perimetro del rectangulo es: " << perimetroRectangulo << "\n\n";
}
void Rectangulo::mostraFigura(){
    cout << "Figura del rectangulo sin color: " << baseRectangulo << "x" << alturaRectangulo << "\n\n";
    for (int i = 1; i <= alturaRectangulo; i++) {
        for (int j = 1; j <= baseRectangulo; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Rectangulo::mostraFigura(int colorRectangulo) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int colorBaseTextoRectangulo = 7;
    cout << "Figura del rectangulo con color:\n\n";
    SetConsoleTextAttribute(hConsole, colorRectangulo);
    for(int i = 1; i <= alturaRectangulo; i++){
        for(int j = 1; j <= baseRectangulo; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    SetConsoleTextAttribute(hConsole, colorBaseTextoRectangulo);
}

float Rectangulo::getArea(){
    return this->area;
}
