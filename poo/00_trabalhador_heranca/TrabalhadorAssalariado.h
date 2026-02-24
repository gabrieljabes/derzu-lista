
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{
    public:
    TrabalhadorAssalariado(float s){
        setSalario(s);
    }

    float calcularPagamentoSemanal() override{
        return salario/4;
    }
};