#include <iostream>
#include <vector>

using namespace std;

/*Considere a estrutura a seguir:
struct Movel{
    char descricao[50];
    float peso;
    char tipo;
};
A partir desta estrutura, escreva um programa no qual o usuário cadastra n móveis, imprimindo ao final do cadastro um relatório informando:
Qual a descrição do móvel mais pesado;
​Quantos móveis acima de 10Kg são do tipo 's';​
Quantos móveis tem a descrição terminando em "Real";​*/

typedef struct{
    string descricao;
    float peso {};
    char tipo;
} movel;

void cadastrar_moveis(movel *m);
void exibir_movel(movel *m);
int quant_s10kg(vector <movel> m);
int quant_reais(vector <movel> m);
string mais_pesado(vector <movel> m);

int main(){
  
    int n{};

    cin >> n;

    vector <movel> moveis (n);

    for(int i = 0; i < n; i++){
        cadastrar_moveis(&moveis.at(i));
    }

    
    cout << "Tipo 's' acima de 10Kg: " << quant_s10kg(moveis) << endl;
    cout << "Termina em \"Real\": " << quant_reais(moveis) << endl;
    cout << "Mais pesado: " << mais_pesado(moveis) << endl;


    return 0;
}

void cadastrar_moveis(movel *m){
    cin.ignore();
    getline(cin, m->descricao);
    cin >> m->peso;
    cin >> m->tipo;
}

void exibir_movel(movel *m){
    cout << m->descricao << endl;
    cout << m->peso << endl;
    cout << m->tipo << endl;
}

int quant_s10kg(vector <movel> m){
    int quant{};
    for(int i = 0; i < m.size(); i++){
        if(m.at(i).peso > 10 && m.at(i).tipo == 's')
            quant++;
    }
    return quant;
}

int quant_reais(vector <movel> m){
    string r {"Real"};
    int quant{};
    for(int i = 0; i < m.size(); i++){
        if(m.at(i).descricao.substr(m.at(i).descricao.size() - 4, 4) == r) //compara as ultimas 4 letras da descriçao com a string r "Real"
            quant++;
    }
    return quant;
}

string mais_pesado(vector <movel> m){
    string s;
    float ps{}; 

    for(int i = 0; i < m.size(); i++){
        if(m.at(i).peso > ps)
            ps = m.at(i).peso;
    }
    for(int i = 0; i < m.size(); i++){
        if(m.at(i).peso == ps)
            s = m.at(i).descricao;
    }
    return s;
}

     
