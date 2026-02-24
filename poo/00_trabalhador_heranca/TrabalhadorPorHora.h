
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{
    private:
    float ValorDaHora;
    float horasSemanais;
    public:
    TrabalhadorPorHora(float valor_hora){
        ValorDaHora = valor_hora;
    }

    void setHorasSemanais(int horas){
        this->horasSemanais = horas;
    }

   float calcularPagamentoSemanal(){
        if(horasSemanais <= 40){
            setSalario(horasSemanais * ValorDaHora * 4);
            return horasSemanais * ValorDaHora;
        } else {
            float horasExtra = horasSemanais - 40;
            setSalario((40 * ValorDaHora + ValorDaHora * horasExtra * 1.5)*4);
            return 40 * ValorDaHora + horasExtra * ValorDaHora * 1.5;
        }
    }
};