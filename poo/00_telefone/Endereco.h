#include <string>

class Endereco{
    private:
    std::string rua;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string estado;
    std::string cep;
    public:
    Endereco(std::string r, int n, std::string b, std::string cd, std::string e, std::string ce)
    : rua{r}, numero{n}, bairro{b}, cidade{cd}, estado{e}, cep{ce} {}

    Endereco() : Endereco("", 0, "", "", "", "") {}

    std::string toString(){
        std::string s;
        s = rua + ", " + std::to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". " + "CEP: " + cep;
        
        return s;
    }
};