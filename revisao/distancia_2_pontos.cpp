#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*Escreva um programa para calcular a distância entre dois pontos no plano
catersiano. O seu programa deve ter uma estrutura Ponto, com campos
x e y, e uma função que recebe dois pontos e retorna o quadrado da distância
entre eles.*/

typedef struct{
    float x;
    float y;
}Ponto;

float distancia(Ponto p1, Ponto p2){
    float d_X = sqrt(pow((p1.x - p2.x), 2));
    float d_Y = sqrt(pow((p1.y - p2.y), 2));

    return sqrt(pow(d_X, 2) + (pow(d_Y, 2)));
}

int main(){

    Ponto p1;
    Ponto p2;

    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;


    cout << pow(distancia(p1, p2), 2) << endl; // a função calcula a distância mas o problema pede o quadrado dela

    return 0;
}