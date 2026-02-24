#include <string>
#include <iostream>

class FiguraGeometrica{
    protected:
    int tipo;
    public:
    FiguraGeometrica(int tipo){
        this->tipo = tipo;
    }
    float calcularArea(){
        return 0;
    }
    void lerAtributoArea(){}
    std::string getNome(){
        switch(tipo){
            case 1: return "Quadrado";
            case 2: return "Retângulo";
            case 3: return "Triângulo";
            case 4: return "CÍrculo";
            default: return "Indefinido";
        }
    }
};