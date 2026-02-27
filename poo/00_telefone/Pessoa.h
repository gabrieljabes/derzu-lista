#include "Endereco.h"

class Pessoa{
    private:
    std::string nome;
    Endereco endereco;
    std::string telefone;
    public:
    Pessoa(std::string n, Endereco e, std::string t) : nome{n}, endereco{e}, telefone {t} {}
    Pessoa(std::string n) : nome{n} {}

    std::string getNome(){
        return nome;
    }
    Endereco getEndereco(){
        return endereco;
    }
    std::string getTelefone(){
        return telefone;
    }

    void setNome(std::string n){
        nome = n;
    }
    void setEndereco(Endereco e){
        endereco = e;
    }
    void setTelefone(std::string t){
        telefone = t;
    }

    std::string toString(){
        std::string s;
        s = nome + ", " + telefone + "\n" + endereco.toString() + "\n";
        return s;
    }
};