#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <vector>

int main(){
    int tipo{5};


    std::vector <FiguraGeometrica*> figs;

    do{
        std::cin >> tipo;
        switch(tipo){
            case 1:
                {
                    FiguraGeometrica *q = new Quadrado();
                    figs.push_back(q);
                    q->lerAtributoArea();
                    break;
                }
            case 2:
                {
                    FiguraGeometrica *r = new Retangulo();
                    figs.push_back(r);
                    r->lerAtributoArea();
                    break;
                }
            case 3:
                {
                    FiguraGeometrica *t = new Triangulo();
                    figs.push_back(t);
                    t->lerAtributoArea();
                    break;
                }
            case 4:
                {
                    FiguraGeometrica *c = new Circulo();
                    figs.push_back(c);
                    c->lerAtributoArea();
                    break;
                }
            case 0:
                    break;
            }    
    } while(tipo != 0);
        
    for(auto k : figs)
        k->exibirAtributos();
  
}

