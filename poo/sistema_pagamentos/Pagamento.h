#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pagamento{
    private:
        float valorPagamento;
        string nomeDoFuncionario;
    public:
        Pagamento() : valorPagamento{} {}

        float getValorPagamento(){ return valorPagamento; }
        string getNomeDoFuncionario(){ return nomeDoFuncionario; }
        void setValorPagamento(float v){ valorPagamento = v; }
        void setNomeDoFuncionario(string s){ nomeDoFuncionario = s; }
};