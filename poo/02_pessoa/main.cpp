#include <iostream>
#include <vector>
#include "Pessoa.h"

/* Considere um sistema de uma agenda telefônica que possui uma classe Pessoa.

Implemente a classe Pessoa que possui os atributos privados nome, idade e telefone.

Considere também que ela possui três construtores, o padrão (sem parâmetros) que inicializa a idade com zero; outro que só recebe o nome; e outro que recebe nome, idade e telefone. Implemente também os métodos para obter e alterar esses atributos (métodos get e set).

Na a função main() instancie um vetor de N Pessoas (pergunte ao usuário o valor de N) lendo os valores da entrada padrão, e os utilize com parâmetros na chamada do construtor. Em seguida leia o nome (ou parte do nome) de uma pessoa a ser pesquisada, e exiba os dados dessa(s) pessoa(s) caso ela seja encontrada, caso não encontrada exiba a mensagem: "Pessoa não encontrada".

Obs1: A pesquisa deve pesquisar em qualquer lugar do nome, não apenas no começo.

​​Obs2: Se estiver implementando em C++, utilize std::string para os atributos de texto, string::find() para pesquisar pela pessoa, e para entrada e saída utilize std::cin e std::cout.*/
int main(){
    int N;
    std::cin >> N;
    std::vector <Pessoa> pessoas;
    std::cin.ignore();

    for (int i = 0; i < N; i++){
        std::string s;
        getline(std::cin, s);
        
        int n;
        std::cin >> n;

        std::string tel;
        std::cin.ignore();
        getline(std::cin, tel);

        Pessoa p(s, n, tel);

        pessoas.push_back(p);
    }

    std::string f;
    std::cin >> f;

    bool encontrou = false;
    for(Pessoa i : pessoas){
        if(i.getNome().find(f) != std::string::npos){
            encontrou = true;
            i.exibirPessoa();
        }
    }

    if(encontrou = false)
        std::cout << "Pessoa não encontrada" << std::endl;
    return 0;
}