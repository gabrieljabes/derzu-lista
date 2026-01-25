#include <iostream>
#include <vector>
#include <cmath>
#include <cfloat>

using namespace std;

/*Escreva um programa que lê as coordenadas no plano cartesiano de um ponto
p e em seguida lê um inteiro n e as coordenadas de n pontos. Seu programa deve
dizer qual dos n pontos é o ponto mais próximo de p. O seu programa deve ter
uma estrutura Ponto, com campos x e y, e uma função que recebe dois pontos e
retorna a distância entre eles.*/

typedef struct{
    float x;
    float y;
}Ponto;

float distancia(Ponto p1, Ponto p2){
    float d_X = sqrt(pow((p1.x - p2.x), 2));
    float d_Y = sqrt(pow((p1.y - p2.y), 2));

    return sqrt(pow(d_X, 2) + (pow(d_Y, 2)));
}

void ponto_proximo(Ponto referencial, vector <Ponto> pontos){
    Ponto mais_prox;
    int i;
    int i_m{};
    float d_menor{FLT_MAX};
    vector <float> distancias; // vetor que guardará todas as distâncias

    for(i = 0; i < pontos.size(); i++){
        distancias.push_back(distancia(referencial, pontos.at(i)));
        if(distancias.at(i) < d_menor){
            d_menor = distancias.at(i);
        }
    }

    for(i = 0; i < distancias.size(); i++){
        if(distancias.at(i) == d_menor){
            i_m = i;
        }
    }

    // cout << "vetor de distâncias:" << endl;
    // for (i = 0; i < pontos.size(); i++){
    //     if(i < pontos.size()-1){
    //         cout << distancias.at(i) << ", ";
    //     }   else{
    //             cout << distancias.at(i) << endl;
    //         }

    // }
    // cout << "menor distância: " << d_menor << endl;
    // cout << "i_m: " << i_m << endl;
    
    cout << "Ponto mais perto é (" << pontos.at(i_m).x << ", " << pontos.at(i_m).y << ")" << endl;
}

int main(){

    int n{};
    Ponto p;

    cin >> p.x >> p.y; // setando o ponto p de referência
    cin >> n;
     vector <Ponto> pontos(n);

    for (int i = 0; i < n; i++){
        cin >> pontos.at(i).x;
        cin >> pontos.at(i).y;
    }

    ponto_proximo(p, pontos);

    return 0;
}