#include <iostream>
#include "Consultor.h"

void cadastrarValores(int& matricula, std::string& nome, float& salario);
void setFuncionario(Funcionario& f, int& matricula, std::string& nome, float& salario);
void setConsultor(Consultor& c, int& matricula, std::string& nome, float& salario);

int main(){
    Funcionario funcionario;
    Consultor consultor;
    
    int matricula;
    std::string nome;
    float salario;

    cadastrarValores(matricula, nome, salario);

    setFuncionario(funcionario, matricula, nome, salario);

    cadastrarValores(matricula, nome, salario);

    setConsultor(consultor, matricula, nome, salario);

    std::cout << funcionario.getMatricula() << " - " << funcionario.getNome() << " - R$ " << funcionario.getSalario() << std::endl;
    std::cout << consultor.getMatricula() << " - " << consultor.getNome() << " - R$ " << consultor.getSalario() << std::endl;

    return 0;
}

void cadastrarValores(int& matricula, std::string& nome, float& salario){
    std::cin >> matricula;
    
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cin >> salario;
}

void setFuncionario(Funcionario& f, int& matricula, std::string& nome, float& salario){
    f.setMatricula(matricula);
    f.setNome(nome);
    f.setSalario(salario);
}

void setConsultor(Consultor& c, int& matricula, std::string& nome, float& salario){
    c.setMatricula(matricula);
    c.setNome(nome);
    c.setSalario(salario);
}

