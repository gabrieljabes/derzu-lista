#include <iostream>

using namespace std;

class Invoice{
    public:
    unsigned id{};
    string nome;
    int quantidade{};
    float preco{};

    float getTotal(){
        return quantidade * preco;
    }

    
};

void cadastrarInvoice(Invoice& w);
void exibirInvoice(Invoice w);

int main(){
    Invoice a, b;

    cadastrarInvoice(a);
    cadastrarInvoice(b);

    exibirInvoice(a);
    exibirInvoice(b);

    return 0;
}

void cadastrarInvoice(Invoice& w){
    cin >> w.id;
    cin.ignore();
    getline(cin, w.nome);
    cin >> w.quantidade;
    cin >> w.preco;

    if(w.preco < 0)
        w.preco = 0;
    if(w.quantidade < 0)
        w.quantidade = 0;
}

void exibirInvoice(Invoice w){
    cout << w.id << " - " << w.nome << " - " << w.quantidade << " - " << w.preco << " - " << w.getTotal() << endl;
}
