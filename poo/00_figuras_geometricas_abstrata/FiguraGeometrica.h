#pragma once
#include <string>
#include <iostream>

class FiguraGeometrica{
    protected:
    int tipo;
    public:
    FiguraGeometrica(int tipo){
        this->tipo = tipo;
    }

    virtual ~FiguraGeometrica() {}

    virtual float calcularArea() = 0;
    virtual void lerAtributoArea() = 0;

    std::string getNome(){
        switch(tipo){
            case 1: return "Quadrado polimórfico";
            case 2: return "Retângulo polimórfico";
            case 3: return "Triângulo polimórfico";
            case 4: return "Círculo polimórfico";
            default: return "Indefinido";
        }
    }
    void exibirAtributos(){
        std::cout << getNome() << " de área " << calcularArea() << std::endl; 
    }
};