#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){

vector <int> nums(10, 0);
vector <int> maiores {0};
float media {0};
cout << "escreva dez inteiros" << endl;

for(int i = 0; i < nums.size(); i++){
    cin >> nums.at(i);
    media += nums.at(i);
}

media /= nums.size();


cout << "Media: " << media << endl;
cout << "Maiores que a media: ";
for(int i = 0; i < nums.size(); i++){
    if(nums.at(i) > media){
        maiores.push_back(nums.at(i));
        cout << nums.at(i) << " ";
    }
}

    return 0;
}