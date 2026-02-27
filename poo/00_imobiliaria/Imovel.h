#pragma once

#include <string>
#include <iostream>

using namespace std;

class Imovel{
    protected:
        int tipo;
        float valor;
        string disponibilidade;
    public:
        Imovel(int t) : tipo{t} {}
        string getNome(){
            switch(tipo){
                case 1:
                    return "Casa";
                    break;
                case 2:
                    return "Apartamento";
                    break;
                case 3:
                    return "Terreno";
                    break;
                default:
                    return "Indefinido";
                    break;
            }
        }
    virtual void lerAtributos(){
        cin >> valor;
        cin.ignore();
        cin >> disponibilidade;
    }

    virtual void exibirAtributos(){
        cout << getNome() << " para " << disponibilidade << ", R$ " << valor <<". ";
    }
};