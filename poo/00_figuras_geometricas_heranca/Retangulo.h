#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica{
    private:
    float a, b;
    public:
    Retangulo(): FiguraGeometrica(2){}
    
    float calcularArea(){
        return a*b;
    }
    void lerAtributoArea(){
        std::cin >> a >> b;
    }
};