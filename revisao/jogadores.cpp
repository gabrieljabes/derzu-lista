#include <iostream>
#include <vector>


using namespace std;
/* Defina um tipo estruturado para armazenar os dados de um jogador de futebol no decorrer de um partida.
 Considere para tal os seguintes dados:

Nome Completo;
Idade;
Chutes a Gol;
Gols;

Escreve um programa no qual o usuário entra com os dados de dois jogares j1 e j2. 
O programa deverá imprimir na tela o nome e idade do jogador com a melhor pontaria.
 Isto é, qual converteu a maior parte dos chutes a gol.*/


typedef struct{
    string nome;
    int idade{};
    int chutes{};
    int gols{};
} jogador;

void cadastrar_valores(jogador *j);
void comparar_stats(jogador *j1, jogador *j2);

int main(){
    jogador j1, j2;

    cadastrar_valores(&j1);
    cadastrar_valores(&j2);
    comparar_stats(&j1, &j2);

    return 0;
 }

void comparar_stats(jogador *j1, jogador *j2){
    double j1_stats = (double)j1->gols / j1->chutes;
    double j2_stats = (double)j2->gols / j2->chutes;

    if(j1_stats > j2_stats){
        cout << j1->nome << " (" << j1->idade << ")" << endl;
    } else if(j2_stats > j1_stats){
            cout << j2->nome << " (" << j2->idade << ")" << endl;
       }
       else{
                cout << "resultados iguais" << endl;
                cout << j1_stats << " " << j2_stats << endl;
        }
  }
void cadastrar_valores(jogador *j){
    getline(cin, j->nome);
    cin >> j->idade;
    cin >> j->chutes;
    cin >> j->gols;
    cin.ignore();
   }
