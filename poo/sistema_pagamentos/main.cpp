#include "ControleDePagamentos.h"

int main(){
    ControleDePagamentos k;

    int n;
    cin >> n;

    float valor;
    string nome;
    int i;
    for(i = 0; i < n; i++){
        cin >> valor;
        cin.ignore();
        getline(cin, nome);
        Pagamento p;
        p.setNomeDoFuncionario(nome);
        p.setValorPagamento(valor);
        k.setPagamento(p, i);
    }

    getline(cin, nome);
    int j;
    j = k.getIndexFuncionario(nome);

    if(j == -1)
        cout << nome << " não encontrado(a)." << endl;
    else
        cout << k.getPagamento(j).getNomeDoFuncionario() << ": R$ " << k.getPagamento(j).getValorPagamento() << endl;

    cout << "Total: R$ " << k.calculaTotalDePagamentos() << endl;


}