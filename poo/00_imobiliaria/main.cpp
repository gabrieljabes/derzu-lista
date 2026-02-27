#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

#include <vector>

int main(){
    int n;
    int tipo;

    cin >> n;

    vector <Imovel*> imoveis;

    for(int i = 0; i < n; i++){
        cin >> tipo;
        switch(tipo){
            case 1:
                {
                Imovel *c = new Casa();
                imoveis.push_back(c);
                c->lerAtributos();
                break;
                }
            case 2:
                {
                Imovel *a = new Apartamento();
                imoveis.push_back(a);
                a->lerAtributos();
                break;
                }
            case 3:
                {
                Imovel *t = new Terreno();
                imoveis.push_back(t);
                t->lerAtributos();
                break;
                }
        }
      }   
    for(auto k : imoveis)
        k->exibirAtributos();
  
}
