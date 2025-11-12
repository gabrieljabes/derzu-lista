#include <iostream>
#include <vector>

/* Implemente um programa que recebe vários números inteiros e calcula a porcentagem
 dos números ímpares maiores do que 15 dentre todos os números. Em seguida, 
 imprima na saída o valor da porcentagem seguido do caractere '%'. O programa deve encerrar 
 quando for informado o número 0.
*/
using namespace std;

int main(){
vector <int> vec;
int resp;
int qnt_numeros_maior15 {};

while(cin >> resp && resp != 0){
    if(resp > 15){
        qnt_numeros_maior15++;
    }
    vec.push_back(resp);
}
cout << ((float)qnt_numeros_maior15 / (float)vec.size()) * 100 << "%" << endl;

    return 0;
} 