#include <iostream>
#include <vector>
#include "ControleDeGastos.h"

int main(){
    ControleDeGastos gastos;
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        Despesa d;

        std::string nome;
        float valor;
        std::string tipo;

        std::cin.ignore();
        std::getline(std::cin, nome);
        std::cin >> valor;
        std::cin >> tipo;

        d.setNome(nome);
        d.setValor(valor);
        d.setTipo(tipo);

        gastos.setDespesa(d, i);
    }

    std::string s;
    std::cin >> s;

    if(gastos.existeDespesaDoTipo(s)){
        for(int i = 0; i < n; i++){
            if(gastos.getDespesa(i).getTipo() == s)
                std::cout << gastos.getDespesa(i).getNome() << ", R$ " << gastos.getDespesa(i).getValor() << std::endl;
        }
        std::cout << "Total: " << gastos.calculaTotalDeDespesas(s) << "/" << gastos.calculaTotalDeDespesas() << std::endl;
    } else{
        std::cout << "Nenhuma despesa do tipo especificado" << std::endl;
        std::cout << "Total: " << gastos.calculaTotalDeDespesas(s) << "/" << gastos.calculaTotalDeDespesas() << std::endl;
    }
    return 0;
}