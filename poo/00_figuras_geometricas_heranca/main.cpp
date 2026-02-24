#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

void exibirFigura(FiguraGeometrica* figura);

int main(){
    Quadrado q;
    Retangulo r;
    Triangulo t;
    Circulo c;

    while(1){
        int tipo;
        std::cin >> tipo;
        switch(tipo){
            case 1: exibirFigura((FiguraGeometrica)q);
             

        }

    }

    void exibirFigura(FiguraGeometrica* figura){
        figura.lerAtributoArea();
             std::cout << figura.getNome() << " de área " << figura.calcularArea() << std::endl;
    }