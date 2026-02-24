#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

int main(){
    int N;
    int tipo;
    std::string nome;
    float s;
    float valorHora;
    float hrsSemanais;


    std::cin >> N;

    std::vector <Trabalhador*> trabalhadores;

    for(int i = 0; i < N; i++){
        std::cin >> tipo;
        std::cin.ignore();
    switch(tipo){
        case 1:
        {   
            std::getline(std::cin, nome);
            std::cin >> s;
            trabalhadores.push_back(new TrabalhadorAssalariado(s));
            trabalhadores[i]->setNome(nome);
            break;
           }
        case 2:
        {
            std::getline(std::cin, nome);
            std::cin >> valorHora;
            std::cin >> hrsSemanais;

            auto* th = new TrabalhadorPorHora(valorHora);
            th->setHorasSemanais(hrsSemanais);
            trabalhadores.push_back(th);
            trabalhadores[i]->setNome(nome);
            break;
        }
    }
}

    for(int i = 0; i < N; i++){
        std::cout << trabalhadores[i]->getNome() << " - Semanal: R$ " << trabalhadores[i]->calcularPagamentoSemanal() << 
        " - Mensal: R$ " << trabalhadores[i]->getSalario() << std::endl;
    }

    for (auto t : trabalhadores)
    delete t;

    return 0;
}