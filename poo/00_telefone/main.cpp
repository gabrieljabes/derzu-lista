#include "Pessoa.h"
#include <iostream>
#include <vector>

void cadastrarPessoa(std::string& nome, std::string& telefone ,std::string& rua, int& numero, std::string& bairro, std::string& cidade, std::string& estado, std::string& cep);

int main(){

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector <Pessoa> pessoas;

    //pessoa
    std::string nome; std::string telefone;
    //endereço
    std::string rua; int numero; std::string bairro; std::string cidade; std::string estado; std::string cep;

    for(int i = 0; i < n; i++){
        cadastrarPessoa(nome, telefone, rua, numero, bairro, cidade, estado, cep);
        Endereco e(rua, numero, bairro, cidade, estado, cep);
        Pessoa p(nome, e, telefone);

        pessoas.push_back(p);
    }

    for(auto k : pessoas)
    std::cout << k.toString() << std::endl;
     return 0;
}

void cadastrarPessoa(std::string& nome, std::string& telefone ,std::string& rua, int& numero, std::string& bairro, std::string& cidade, std::string& estado, std::string& cep){
    std::getline(std::cin, nome);
    std::getline(std::cin, telefone);
    std::getline(std::cin, rua);
    std::cin >> numero;
    std::cin.ignore();
    std::getline(std::cin, bairro);
    std::getline(std::cin, cidade);
    std::getline(std::cin, estado);
    std::getline(std::cin, cep);
}