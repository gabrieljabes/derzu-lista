#include <string>

class Despesa{
    private:
    std::string nome;
    float valor;
    std::string tipo;

    public:
    Despesa(){
        setValor(0);
        setNome("");
        setTipo("");
    }

    std::string getNome(){
        return nome;
    }

    float getValor(){
        return valor;
    }

    std::string getTipo(){
        return tipo;
    }


    void setNome(std::string nm){
        this->nome = nm;
    }

    void setValor(float vlr){
        this->valor = vlr;
    }

    void setTipo(std::string tp){
        this->tipo = tp;
    }

    
};

