#pragma once
#include "Pagamento.h"
#include <vector>

class ControleDePagamentos{
    private:
    vector <Pagamento> pagamentos;
    public:
    void setPagamento(Pagamento p, int index){ pagamentos.insert(pagamentos.begin() + index, p); }
    Pagamento getPagamento(int index){ return pagamentos[index]; }
    float calculaTotalDePagamentos(){
        float soma = 0;
        for(auto k : pagamentos)
            soma+=k.getValorPagamento();
            return soma;
    }
    int getIndexFuncionario(string nomeFuncionario){
        int i;
        for(i = 0; i < pagamentos.size(); i++){
            if(pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) != string::npos)
                return i;
        }
        return -1;
    }
};