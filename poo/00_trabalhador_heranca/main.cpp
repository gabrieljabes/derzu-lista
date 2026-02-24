#include "TrabalhadorPorHora.h"

int main(){
    int N;
    int tipo;
    std::string nome;
    float s;
    float valorHora;


    std::cin >> N;
    std::cin >> tipo;

    std::vector <Trabalhador*> trabalhadores;

    for(int i = 0; i < N; i++){
    switch(tipo){
        case 1:
        {
            std::cin >> s;
            std::cin.ignore();
            std::getline(std::cin, nome);
            TrabalhadorAssalariado t(s);
            t.setNome(nome);

            trabalhadores.push_back(&t);
            break;
           }
        case 2:
        {
            std::cin >> valorHora;
            std::cin.ignore();
            std::getline(std::cin, nome);
            TrabalhadorPorHora t(s);
            t.setNome(nome);
            trabalhadores.push_back(&t);
            break;
        }
    }
}

    for(int i = 0; i < N; i++){
        std::cout << trabalhadores[i]->getNome() << " - Semanal: R$ " << trabalhadores[i]->calcularPagamentoSemanal() << 
        " - Mensal: R$ " << trabalhadores[i]->getSalario() << std::endl;
    }
    return 0;
}