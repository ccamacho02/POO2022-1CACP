
#include "View.h"

void View::combinarReferencias(){
    Circulo circuloObj;
    Cuadrado cuadradoObj;
    Rectangulo rectanguloObj;
}

void View::agregarCirculo(){
    float radio;
    cout << "Digita el radio del circulo: \n:";
    cin >> radio;
    Circulo circulo(radio);
    figurasVector.push_back(new Circulo(circulo));
}
void View::agregarCuadrado(){
    float lado;
    cout << "Digita el lado del cuadrado: \n:";
    cin >> lado;
    Cuadrado cuadrado(lado);
    figurasVector.push_back(new Cuadrado(cuadrado));
}
void View::agregarRectangulo(){
    float base, altura;
    cout << "Digita la base del rectangulo: \n:";
    cin >> base;
    cout << "Digita la altura del rectangulo: \n:";
    cin >> altura;
    Rectangulo rectangulo(base, altura);
    figurasVector.push_back(new Rectangulo(rectangulo));
}

void View::agregarTrianguloRectangulo() {
    float base, altura, hipotenusa;
    cout << "Digite la base el triangulo rectangulo: \n:";
    cin >> base;
    cout << "Digite la altura del triangulo rectangulo: \n:";
    cin >> altura;
    cout << "Ingrese la hipotenusa del triangulo rectangulo: \n:";
    cin >> hipotenusa;
    Triangulo_Rectangulo trianguloRectangulo(base, altura, hipotenusa);
    figurasVector.push_back(new Triangulo_Rectangulo(trianguloRectangulo));
}

void View::mostrarAreas(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraArea();
    }
}
void View::mostrarPerimetros(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraPerimetro();
    }
}
void View::mostrarFiguras(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraFigura();
    }
}

int View::seleccionarColor() {
    int seleccionColor = 0;
    cout << "Opciones de colores disponibles:\n";
    cout << "1. Azul\n";
    cout << "2. Verde\n";
    cout << "3. Cyan\n";
    cout << "4. Rojo\n";
    cout << "5. Rosa\n";
    cout << "Ingrese el numero del color con el que desea mostrar las figuras\n: ";
    cin >> seleccionColor;
    return seleccionColor;
}

void View::mostrarFiguras(int colorGeneral) {
    for(int i = 0; i < figurasVector.size(); i++){
        figurasVector[i]->mostraFigura(colorGeneral);
    }
}

void View::mostrarSumaAreas(){
    float sumaAreas = 0;
    for (int i=0; i<figurasVector.size(); i++){
        sumaAreas += figurasVector[i]->getArea();
    }
    cout << "La suma de todas las areas es: " << sumaAreas << "\n";
}