#pragma once

#include "Imovel.h"

class Apartamento : public Imovel{
    private:
        float area;
        int numQuartos;
        int andar;
        float valCondo;
        int numGaragem;
    public:
        Apartamento() : Imovel(2) {}
        void lerAtributos(){
            Imovel::lerAtributos();
            cin >> area >> numQuartos >> andar >> valCondo >> numGaragem;
        }
        void exibirAtributos(){
            Imovel::exibirAtributos();
            cout << area << "m2 de área, " << numQuartos << " quartos, " << andar << " andar(es), " << valCondo << " de condomínio, " << numGaragem << " vaga(s) de garagem." << endl;
        }

};