#include "Funcionario.h"

class Consultor : public Funcionario{
    public:
    float getSalario(){
        return salario*1.1;
    }

    float getSalario(float coeficiente){
        float fator = 1 + coeficiente;
        return salario*fator;
    }
};