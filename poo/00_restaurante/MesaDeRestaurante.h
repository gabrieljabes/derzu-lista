#pragma once

#include "Pedido.h"
#include <vector>
#include <iostream>

class MesaDeRestaurante{
    private:
        vector <Pedido> pedidos;
    public:
        void addPedido(Pedido p){
            for(auto& item : pedidos){
                if(item.getDesc() == p.getDesc()){
                    item.setQuant(item.getQuant() + p.getQuant());
                    return;
                }
            }
        pedidos.push_back(p);
        }

        void zeraPedidos(){
            for(auto i : pedidos)
                i.setQuant(0);
        }

        float calculaTotal(){
            float soma = 0;
            for(auto i : pedidos)
                soma+= i.getPreco() * i.getQuant();
            return soma;
        }

        void exibeConta(){
            float total = 0;
            for (auto i : pedidos){
                total+= i.getPreco() * i.getQuant();
                cout << i.getNumero() << " - " << i.getDesc() << " - " << i.getQuant() << " - " << i.getPreco() << " - R$ " << i.getPreco() * i.getQuant() << endl;
            }
                cout << "Total: R$ " << total << endl;
        }
};