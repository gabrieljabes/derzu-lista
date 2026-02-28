#pragma once

#include <string>

using namespace std;

class Pedido{
    private:
        int numero;
        string desc;
        int quant;
        float preco;
    public:
        Pedido(int n, string d, int q, float p) : numero{n}, desc{d}, quant{q}, preco{p} {}
        float getNumero(){return numero;}
        string getDesc(){return desc;}
        int getQuant(){return quant;}
        float getPreco(){return preco;}
        void setQuant(int q){quant = q;}
};