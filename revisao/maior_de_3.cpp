#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maior(const vector <int>& vec);
int main(){

vector <int> vetor(3);

for(int i = 0; i < 3; i++){
    cin >> vetor.at(i);
}
cout << "Maior número: " << maior(vetor) << endl;

return 0;
}

int maior(const vector <int>& vec){
    return max({vec[0], vec[1], vec[2]});
}