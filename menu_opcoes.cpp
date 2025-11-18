#include <iostream>
#include <vector>

using namespace std;

/*Faça um programa que apresente um Menu com 4 opções, em seguida, leia, da entrada padrão a opção desejada. 
Por fim, apresente a opção selecionada, e volte ao início do Menu. Caso a opção tenha sido o item 4 o programa deve ser finalizado.
 Caso uma opção invalida lida, apresente a mensagem "Opcao <ValorOpcao> Invalida". Exemplo do menu:
1 - Item 1
2 - Item 2
3 - Item 3
4 - Sair*/

void exibirItem(int opcao);
void exibirMenu(int quant_itens);

int main(){
    int opcao {};
    int quant_itens {3};
    
    do{
        exibirMenu(quant_itens);
        cin >> opcao;
        if(opcao == 4)
            return 0;
        else
            exibirItem(opcao);
    } while (opcao != 4);

    return 0;
}

void exibirItem(int opcao){
    cout << "Item " << opcao << endl;
}

void exibirMenu(int quant_itens){
    for(int i = 0; i < quant_itens; i++)
        cout << i + 1 << " - " << "Item " << i + 1 << endl;
    cout << quant_itens + 1 << " - " << "Sair" << endl;
}
