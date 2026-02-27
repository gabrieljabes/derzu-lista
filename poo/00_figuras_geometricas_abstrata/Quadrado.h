#pragma once
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{
    private:
    float lado;
    public:
    Quadrado(): FiguraGeometrica(1){}
    
    float calcularArea(){
        return lado*lado;
    }
    void lerAtributoArea(){
        std::cin >> lado;
    }
};