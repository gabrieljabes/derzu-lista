#pragma once

#include <string>
#include <iostream>

using namespace std;

class Pessoa{
    protected:
        string nome;
        string telefone;
        string cpf;
    public:
        Pessoa(string n, string t, string c) : nome{n}, telefone{t}, cpf{c} {}
        Pessoa() : Pessoa("", "", "") {}
        virtual void exibir(){
            cout << nome << " - " << telefone << " - CPF: " << cpf << endl;
        }
};