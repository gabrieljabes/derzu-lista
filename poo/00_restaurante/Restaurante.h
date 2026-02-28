#include "MesaDeRestaurante.h"

class Restaurante{
    private:
        vector <MesaDeRestaurante> mesas;
    public:
        Restaurante() {mesas.resize(10);}
        void addPedido(Pedido p, int indMesa){
            mesas[indMesa].addPedido(p);
        }
        float calculaTotalRestaurante(){
            float total = 0;
            for(auto i : mesas)
                total += i.calculaTotal();
            return total;
        }
        MesaDeRestaurante getMesa(int indMesa){
            return mesas[indMesa];
        }
};