#include <iostream>
#include <vector>
#include "Funcionario.h"

int main(){

    int N;
    std::cin >> N;
    std::vector <Funcionario> funcionarios;

    for(int i = 0; i < N; i++){
        std::string nm;
        std::cin >> nm;

        std:: string sb;
        std::cin >> sb;

        float slr;
        std::cin >> slr;

        Funcionario f(nm, sb, slr);
        funcionarios.push_back(f);
    }

    for(Funcionario k : funcionarios){
        k.exibirFuncionario();
        k.aumentaSalario(10);
        std::cout << k.getSalarioAnual() << std::endl;
    }
    
    return 0;
}
