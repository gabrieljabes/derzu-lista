#include <iostream>

/* Crie uma classe chamada Invoice para que uma loja de suprimentos de informática possa utilizá-la para representar uma fatura de um único item vendido na loja.

Uma Invoice (fatura) deve incluir quatro partes de informações como variáveis de instância (atributos) – o número, a descrição, a quantidade comprada de um item e o preço do item. Os atributos devem ser privados, a classe deve conter um construtor que inicializa os quatro atributos, e forneça um método get e set para cada atributo da classe. Se a quantidade ou o preço não forem positivos, eles devem ser configurados como 0 (zero).

Além disso, forneça um método float getTotal() (sem parâmetros) que calcula o valor total da fatura (isto é, multiplica a quantidade pelo preço por item). 

Forneça também um método void print() (sem parâmetros) que exibe os 4 atributos e o total da Invoice.

Na a função main() crie 2 invoices lendo os valores da entrada padrão, e os utilize com parâmetros na chamada do construtor. Em seguida, exiba os 4 atributos e o total da Invoice, utilizando o método print(). 

Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto, e para entrada e saída utilize std::cin e std::cout.*/

class Invoice{
    private:
        int numero;
        int quantidade;
        std::string item;
        float preco;
    public:
    Invoice(){
    }

    int getNumero(){
        return numero;
    }
    int getQuantidade(){
        return quantidade;
    }
    std::string getItem(){
        return item;
    }
    float getPreco(){
        return preco;
    }

    void setNumero(int num){
        numero = num;
    }
    void setQuantidade(int num){
        quantidade = (num > 0) ? num : 0;
    }
    void setItem(std::string desc){
        item = desc;
    }
    void setPreco(float prc){
        preco = (prc > 0) ? prc : 0;
    }

    float getTotal(){
        return quantidade * preco;
    }

    void print(){
        std::cout << numero << " - " << item << " - " << quantidade << " - " << preco << " - " << getTotal() << std::endl;
    }
};

int main(){
    Invoice faturas[2];

    for(auto&i : faturas){
        int num; int quantidade; float preco; std::string desc;
        std::cin >> num; std::cin.ignore(); std::getline(std::cin, desc); std::cin >> quantidade >> preco;

        i.setNumero(num); i.setItem(desc); i.setQuantidade(quantidade); i.setPreco(preco);
    }
    faturas[0].print();
    faturas[1].print();
    return 0;
}
