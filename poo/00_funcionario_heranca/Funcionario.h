#include <string>
class Funcionario{
    protected:
        int matricula;
        std::string nome;
    float salario;
    public:
        Funcionario(){
            setMatricula(0);
            setSalario(0);
        }
        int getMatricula(){
            return matricula;
        }
        std::string getNome(){
            return nome;
        }
        float getSalario(){
            return salario;
        }
        void setMatricula(int matricula){
            this->matricula = matricula;
        }
        void setNome(std::string nome){
            this->nome = nome;
        }
        void setSalario(float salario){
            this->salario = salario;
        }
};