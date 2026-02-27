#pragma once

#include "Pessoa.h"

class Aluno : public Pessoa{
    private:
        float CRA;
        int semestre;
    public:
        Aluno(string n, string t, string c, float cr, int s) : Pessoa(n, t, c), CRA{cr}, semestre{s} {};
        void exibir(){
            Pessoa::exibir();
            cout << "CRA: " << CRA << " - " << "Semestre: " << semestre << endl;
        }
};
