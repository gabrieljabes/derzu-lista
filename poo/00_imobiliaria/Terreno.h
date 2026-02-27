#pragma once

#include "Imovel.h"

class Terreno : public Imovel{
    private:
        float area;
    public:
        Terreno() : Imovel(3) {}
        void lerAtributos(){
            Imovel::lerAtributos();
            cin >> area;
        }
        void exibirAtributos(){
            Imovel::exibirAtributos();
            cout << area << "m2 de área de terreno." << endl;
               }
};