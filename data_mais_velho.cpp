#include <iostream>
#include <vector>

/* Crie uma estrutura Data, com campos dia, mes e ano, e escreva um
programa que lê as datas de nascimento de duas pessoas e determina
quem é a mais velha.

Para isso, crie uma função que recebe duas datas, d1 e d2 , e retorna 1
se d1 é a data mais antiga, 0 se as duas datas são iguais, e −1 se d2 é a
data mais antiga. */

using namespace std;


typedef struct{
    int dia;
    int mes;
    int ano;
}data_;


int mais_velho(data_ d1, data_ d2){
    bool d1d2;
    bool igual;
    bool d2d1;

if(d1.ano < d2.ano){
    d1d2 = true;
 } else if(d2.ano < d1.ano){
    d2d1 = true;
    } else if(d1.mes < d2.mes){
        d1d2 = true;
    } else if(d2.mes < d2.mes){
        d2d1 = true;
     } else if(d1.dia < d2.dia){
        d1d2 = true;
     } else if(d2.dia < d1.dia){
        d2d1 = true;
      } else{
        igual = true;
        }

int ret;

if(d1d2 == true){
    ret = 1;
} else if(igual == true){
    ret = 0;
} else if(d2d1 == true){
    ret = -1;
}

return ret;

}

int main(){
    data_ d1;
    data_ d2;

cin >> d1.dia;
cin >> d1.mes;
cin >> d1.ano;

cin >> d2.dia;
cin >> d2.mes;
cin >> d2.ano;
    
    int resp = mais_velho(d1, d2);

    cout << resp;

    if(resp == 1){
        cout << "Pessoa 1 é mais velha" << endl;
    } else if(resp == -1){
        cout << "Pessoa 2 é mais velha" << endl;
    }

    return 0;
}
