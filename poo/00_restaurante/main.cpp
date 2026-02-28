#include "Restaurante.h"

int main(){

    Restaurante restaurante;

    int numero;
    string desc;
    int quant;
    float preco;
    int indice;

    while(1){
        cin >> numero;
        if(numero == -1)
         break;
        cin.ignore();
        getline(cin, desc);
        cin >> quant;
        cin >> preco;
        cin >> indice;

        Pedido p(numero, desc, quant, preco);
        restaurante.addPedido(p, indice);
    }

    for(int i = 0; i < 10; i++){
        if(restaurante.getMesa(i).calculaTotal() == 0)
            continue;
        else{
            cout << "Mesa " << i << endl;
            restaurante.getMesa(i).exibeConta();
        }
    }

    cout << endl << "Total Restaurante: R$ " << restaurante.calculaTotalRestaurante() << endl;

}
