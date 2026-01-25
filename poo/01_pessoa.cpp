#include <iostream>

/* Considere um sistema de uma agenda telefônica que possui uma classe Pessoa.
Implemente a classe Pessoa que possui os atributos públicos nome, idade e telefone. 
Na a função main() instancie 2 pessoas lendo os valores da entrada padrão e armazene-os diretamente nos atributos da classe. Em seguida, 
exiba os 3 atributos. */

class Pessoa{
    public:
    std::string nome;
    int idade;
    std::string telefone;
};

int main(){
    Pessoa pessoas[2];

    for(int i = 0; i < 2; i++){
        std::getline(std::cin, pessoas[i].nome);
        std::cin >> pessoas[i].idade;
        std::cin.ignore();
        std::getline(std::cin, pessoas[i].telefone);
    }

    for(auto& i : pessoas){
        std::cout << i.nome << ", " << i.idade << ", " << i.telefone << std::endl;
    }
}