#include <iostream>
#include <vector>

using namespace std;

/* Implemente uma função que receba como parâmetro de entrada
uma matriz de números inteiros de tamanho qualquer e o seu tamanho.
A função a ser implementada deve retornar verdadeiro
caso a matriz seja esparsa ou falso caso contrário,
considerando que uma matriz é esparsa se ela possuir
mais do que 70% dos seus elementos iguais a 0.
A função main deve ler as dimensões da matriz, cada
um dos seus elementos e imprimir uma mensagem
informando se a matriz é esparsa ou não, de acordo
com a resposta da função. 

A matriz tem largura/altura
máximas igual a 10.*/

bool razaoMatriz(vector <vector<int>> *matriz);
void preencherMatriz(vector <vector<int>> *matriz);

int main(){
    int m, n;

    cin >> m;
    cin >> n;

    vector <vector<int>> matriz (m, vector<int>(n)); 

    preencherMatriz(&matriz);

    bool esparsa = razaoMatriz(&matriz);
    if(esparsa == true)
        cout << "A matriz é esparsa" << endl;
    else
        cout << "A matriz não é esparsa" << endl;

    return 0;
}

bool razaoMatriz(vector <vector<int>> *matriz){
    int count_0{};
    size_t m{matriz->size()};
    size_t n{matriz->at(0).size()};

    for(size_t i = 0; i < m; i++)
        for(size_t j = 0; j < n; j++)
            if(matriz->at(i).at(j) == 0)
                count_0++;

    if((float)count_0/(m * n) > 0.7)
        return true;
    else
        return false;
}

void preencherMatriz(vector <vector<int>> *matriz){

    size_t m{matriz->size()};
    size_t n{matriz->at(0).size()};

    for(size_t i = 0; i < m; i++)
        for(size_t j = 0; j < n; j++)
            cin >> matriz->at(i).at(j);
}