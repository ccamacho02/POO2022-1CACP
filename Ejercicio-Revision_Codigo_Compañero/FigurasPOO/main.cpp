#include <iostream>
#include "View.h"

using namespace std;

void menu(View view){
    int k = 0, opcion = 0;
    do
    {
        cout << "1.  Agregar un Circulo\n";
        cout << "2.  Agregar un Cuadrado\n";
        cout << "3.  Agregar un Rectangulo\n";
        cout << "4.  Agregar un Triangulo Rectangulo\n";
        cout << "5.  Mostrar areas\n";
        cout << "6.  Mostrar perimetros\n";
        cout << "7.  Mostrar suma de areas\n";
        cout << "8.  Mostrar figuras sin color\n";
        cout << "9.  Mostrar figuras con color\n";
        cout << "0.  Salir \n";

        cin >> opcion;

        switch (opcion)
        {
            case 1:
                view.agregarCirculo();
                break;
            case 2:
                view.agregarCuadrado();
                break;
            case 3:
                view.agregarRectangulo();
                break;
            case 4:
                view.agregarTrianguloRectangulo();
                break;
            case 5:
                view.mostrarAreas();
                break;
            case 6:
                view.mostrarPerimetros();
                break;
            case 7:
                view.mostrarSumaAreas();
                break;
            case 8:
                view.mostrarFiguras();
                break;
            case 9:
                k = view.seleccionarColor();
                view.mostrarFiguras(k);
                break;
            default:
                break;
        }
    } while (opcion != 0);
}

int main() {
    View view;
    view.combinarReferencias();
    menu(view);
    return 0;
}
