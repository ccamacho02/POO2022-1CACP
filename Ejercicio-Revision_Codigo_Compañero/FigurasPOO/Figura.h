
#ifndef FIGURASPOO_FIGURA_H
#define FIGURASPOO_FIGURA_H

#include <iostream>

using namespace std;

class Figura {
protected:
    float area;
public:
    virtual void mostraArea() = 0;
    virtual void mostraPerimetro() = 0;
    virtual void mostraFigura() = 0;
    virtual void mostraFigura(int color) = 0;
    virtual float getArea() = 0;
};


#endif //FIGURASPOO_FIGURA_H
