#include <iostream>


/* Crie uma classe chamada Funcionario para uma determinada empresa.
Essa classe possui três variáveis de instância (atributos) publicos – primeiro nome, sobrenome e o salário mensal.
No construtor sem parâmetros inicie o Salário Mensal com zero.
Crie também um método que retorna o salário anual (float getSalarioAnual()).

Na a função main() crie N Funcionários lendo os valores da entrada padrão e armazene diretamente nos atributos da classe. Em seguida, exiba os 3 atributos e o salário anual. 
​Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto, e para entrada e saída utilize std::cin e std::cout.*/

class funcionario{
    public:
        std::string nome;
        std::string sobrenome;
        float salario{};

    float getSalarioAnual(){
        return 12*salario;
    }
};

int main(){
    int n;
    std::cin >> n;
    funcionario funcionarios[n];

    for(int i = 0; i < n; i++){
        std::cin >> funcionarios[i].nome;
        std::cin >> funcionarios[i].sobrenome;
        std::cin >> funcionarios[i].salario;
    }

    for(auto& i : funcionarios){
        std::cout << i.nome << " " << i.sobrenome << " - " << i.salario << " - " << i.getSalarioAnual() << std::endl;
    }
}

