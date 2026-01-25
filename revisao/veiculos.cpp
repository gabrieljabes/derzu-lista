#include <iostream>
#include <vector>

using namespace std;

/* Defina um tipo estruturado para representar um veículo, descrito pelos seguintes dados:
Modelo;
Marca;
Ano de Fabricação;
Preço;
Escreva um programa no qual o usuário informa os dados de dois veículos, sendo impresso ao final o modelo e marca do veículo mais antigo.
Caso ambos os veículos tenham sido fabricados no mesmo ano, informe a marca e o modelo do veículo mais barato.*/

typedef struct{
    string modelo;
    string marca;
    int ano {};
    float custo {};
} veiculo;

void imprimir_v(veiculo *c);
void cadastrar_v(veiculo *c);
void comparar_v(veiculo *c, veiculo *d);

int main(){
    veiculo c1;
    veiculo c2;

    cadastrar_v(&c1);
    cadastrar_v(&c2);

    comparar_v(&c1, &c2);

    return 0;
}

void imprimir_v(veiculo *c){
    cout << c->marca << " " << c->modelo << endl;
   // cout << c->ano << " " << c->custo << endl;
}

void cadastrar_v(veiculo *c){
    getline(cin, c->modelo);
    getline(cin, c->marca);
    cin >> c->ano;
    cin >> c->custo;
    cin.ignore();
}

void comparar_v(veiculo *c, veiculo *d){
    if(c->ano != d->ano){
        if(c->ano < d->ano){
            imprimir_v(c);
            }
        else if(d->ano < c->ano){
            imprimir_v(d);
        }
    } else {
        if(c->custo < d->custo){
            imprimir_v(c);
        }
        else if(d->custo < c->custo){
            imprimir_v(d);
        }
    }   
}