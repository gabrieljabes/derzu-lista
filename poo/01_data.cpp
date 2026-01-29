#include <iostream>

class Data{
    public:
        int dia{1}, mes{1}, ano{1};
};

using namespace std;

void exibirData(Data data);

int main(){

    Data hoje;

    cin >> hoje.dia;
    cin >> hoje.mes;
    cin >> hoje.ano;

exibirData(hoje);

return 0;

}

void exibirData(Data data){
    cout << data.dia << "/" << data.mes << "/" << data.ano << endl;
}
