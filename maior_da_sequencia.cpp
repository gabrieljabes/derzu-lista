#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main(){

int N {};

cin >> N;

vector <int> numeros (N, 0);
int maior {-2147483647};

for(int i = 0; i < numeros.size(); i++){
    cin >> numeros.at(i);
    if(numeros.at(i) > maior){
        maior = numeros.at(i);
    }
}

cout << maior << endl;

    return 0;
}