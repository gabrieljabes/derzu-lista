#include <iostream>
#include <vector>
#include <climits>
/* Implemente um programa que receba uma quantidade indeterminada de números inteiros. 
Assumindo que serão digitados pelo menos dois números, o programa deve se encerrar quando 
for digitado o número 0. Após isto, devem ser impressos os dois maiores números digitados.

*/
using namespace std;

void exibir_vetor(const vector <int> vetor){
    for(int i = 0; i < vetor.size(); i++){
        cout << vetor.at(i) << " ";
    }
}

int maior_do_vetor(const vector <int> vetor){
    int maior{INT_MIN};
    for(int i = 0; i < vetor.size(); i++){
    if(maior < vetor.at(i)){
        maior = vetor.at(i);
        }
    }
    return maior;
}
int segundo_maior_do_vetor(int maior, const vector <int> vetor){
    int segundo_maior{INT_MIN};
    for(int i = 0; i < vetor.size(); i++){
    if(segundo_maior < vetor.at(i) && vetor.at(i) < maior){
        segundo_maior = vetor.at(i);
        } else {

        }
    }
    return segundo_maior;
}
int main(){
vector <int> vec;
int resp;

while(cin >> resp && resp != 0){
    vec.push_back(resp);
}

cout << "Maior: " << maior_do_vetor(vec) << endl;
cout << "Segundo maior: " << segundo_maior_do_vetor(maior_do_vetor(vec), vec) << endl;

    return 0;
} 