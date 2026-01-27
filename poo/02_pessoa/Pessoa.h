#pragma once
#include <string>
#include <iostream>

class Pessoa{
    private:
    std::string nome;
    int idade;
    std::string telefone;

    public:
    Pessoa(){
        idade = 0;
    }
    Pessoa(std::string n){
        nome = n;
    }
    Pessoa(std::string n, int id, std::string tel){
        nome = n;
        idade = id;
        telefone = tel;
    }

    std::string getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }

    std::string getTelefone(){
        return telefone;
    }

    void setNome(std::string n){
        nome = n;
    }

    void setIdade(int id){
        idade = id;
    }

    void setTelefone(std::string tel){
        telefone = tel;
    }

    void exibirPessoa(){
        std::cout << getNome() << ", " << getIdade() << ", " << getTelefone() << std::endl;
    }
};

