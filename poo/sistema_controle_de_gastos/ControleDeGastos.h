#include "Despesa.h"
#include <vector>

class ControleDeGastos{
    private:
    std::vector <Despesa> despesas;
    
    public:
    ControleDeGastos(){
        this->despesas = std::vector <Despesa>(100);
    }

    void setDespesa(Despesa d, int pos){
        this->despesas.insert(despesas.begin() + pos, d);
    }
    
    Despesa getDespesa(int pos){
        return this->despesas[pos];
    }

    float calculaTotalDeDespesas(){
        float total{};

        for(Despesa k : this->despesas)
            total+= k.getValor();
        
        return total;
    }

    float calculaTotalDeDespesas(std::string tipo){
        float total{};

        for(Despesa k : this->despesas)
            if(k.getTipo() == tipo)
                total+= k.getValor();
        
        return total;
    }

    bool existeDespesaDoTipo(std::string tipo){
        bool existe;

        for(Despesa k : this->despesas)
            if(tipo == k.getTipo()){
                existe = true;  
                break;
            } else
                existe = false;

    return existe;
    }

};