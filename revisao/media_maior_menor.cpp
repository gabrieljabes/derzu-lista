#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/* Escreva um programa para ler uma sequência de valores inteiros fornecidos pelo usuário e informar o menor, 
o maior e a média dos valores lidos. Seu programa deve ler inicialmente o tamanho da sequência representado por
 um valor inteiro N e, em seguida, ler os N valores inteiros da sequência. Após a leitura, seu programa deverá imprimir o menor, 
 o maior e a média dos valores, nesta ordem.

*/
int main(){

int tamanho_vetor{};
cin >> tamanho_vetor;

vector <int> vec(tamanho_vetor, 0);

for(int i = 0; i < tamanho_vetor; i++){
    cin >> vec.at(i);
}

int maior = vec.at(0);
int menor = vec.at(0);
int soma_elementos {0};

for(int i = 0; i < tamanho_vetor; i++){
    if(maior < vec.at(i)){
        maior = vec.at(i);
    }
    if(menor > vec.at(i)){
        menor = vec.at(i);
    }

    soma_elementos += vec.at(i);
}
float media = float(soma_elementos) / float(tamanho_vetor);

cout << menor << " " << maior << " " << media << endl;

    return 0;
}


