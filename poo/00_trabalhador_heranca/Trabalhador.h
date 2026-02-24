#pragma once

#include <string>
#include <iostream>
#include <vector>

class Trabalhador{
    protected:
    std::string nome;
    float salario;

    public:
    Trabalhador(){
        salario = 0;
    }
     
    virtual ~Trabalhador() = default;

    std::string getNome(){
        return nome;
    }

    float getSalario(){
        return salario;
    }

    void setNome(std::string nome){
        this->nome = nome;
    }

    void setSalario(float salario){
        this->salario = salario;
    }
    virtual float calcularPagamentoSemanal(){
        return 0;
    };
};