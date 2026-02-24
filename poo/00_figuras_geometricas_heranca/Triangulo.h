#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
    private:
    float b, h;
    public:
    Triangulo(): FiguraGeometrica(3){}
    
    float calcularArea(){
        return (b*h)/2;
    }
    void lerAtributoArea(){
        std::cin >> b >> h;
    }
};