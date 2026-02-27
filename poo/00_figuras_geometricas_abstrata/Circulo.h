#pragma once
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{
    private:
    float r;
    public:
    Circulo(): FiguraGeometrica(4){}
    
    float calcularArea(){
        return (3.14)*(r*r);
    }
    void lerAtributoArea(){
        std::cin >> r;
    }
};