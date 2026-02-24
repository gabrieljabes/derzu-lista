

#include "TrabalhadorAssalariado.h"

class TrabalhadorPorHora : public Trabalhador{
    private:
    float ValorDaHora;
    public:
    TrabalhadorPorHora(float valor_hora){
        ValorDaHora = valor_hora;
    }

   float calcularPagamentoSemanal(int horasSemanais){
        salario = ValorDaHora * horasSemanais * 4;
        return ValorDaHora * horasSemanais;
    }
};