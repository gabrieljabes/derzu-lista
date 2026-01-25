#include <iostream>
#include <vector>

using namespace std;

/* Escreva um programa que leia duas matrizes inteiras A e B, ambas de ordem m x n, e que utilize uma função para realizar a operação A + B.
 A matriz resultante da operação deve ser exibida na própria função.
*/

void preencherMatriz(vector <vector<int>> *matriz);
void exibirSomaMatrizes(vector <vector<int>> *matriz_A, vector <vector<int>> *matriz_B);
void exibirMatriz(vector <vector<int>> *matriz);

int main(){
    int m, n;

    cin >> m;
    cin >> n;

    vector <vector<int>> A (m, vector<int>(n)); // vetor de vetor
    vector <vector<int>> B (m, vector<int>(n)); // vetor de vetor

   preencherMatriz(&A);
   preencherMatriz(&B);

   
    exibirSomaMatrizes(&A, &B);
    
   
    
    return 0;
}

void preencherMatriz(vector <vector<int>> *matriz){
    size_t m{matriz->size()};
    size_t n{matriz->at(0).size()};

    for(size_t i = 0; i < m; i++){
        for(size_t j = 0; j < n; j++){
            cin >> matriz->at(i).at(j);
        }
    }
}

void exibirSomaMatrizes(vector <vector<int>> *matriz_A, vector <vector<int>> *matriz_B){
    size_t m{matriz_A->size()};
    size_t n{matriz_A->at(0).size()};
    
    for(size_t i = 0; i < m; i++){
        for(size_t j = 0; j < n; j++){
            cout << matriz_A->at(i).at(j) + matriz_B->at(i).at(j) << " ";
        }
            cout << endl;
    }
    cout << endl;
}

void exibirMatriz(vector <vector<int>> *matriz){
    size_t m{matriz->size()};
    size_t n{matriz->at(0).size()};
    
    for(size_t i = 0; i < m; i++){
        for(size_t j = 0; j < n; j++){
            cout << matriz->at(i).at(j) << ", ";
        }
            cout << endl;
    }
    cout << endl;
}