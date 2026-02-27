#pragma once

#include "Pessoa.h"

class Professor : public Pessoa{
    private:
        int qtdDisciplinas;
        string departamento;
    public:
        Professor(string n, string t, string c, int q, string d) : Pessoa(n, t, c), qtdDisciplinas{q}, departamento{d} {}
        void exibir(){
            Pessoa::exibir();
            cout << "Qtd: " << qtdDisciplinas << " - " << departamento << endl;
        }
};
