class Funcionario{
    private:
    std::string nome;
    std::string sobrenome;
    float salario;

    public:
    Funcionario(std::string nm, std::string s_nm, float slr){
        nome = nm;
        sobrenome = s_nm;
        salario = (slr > 0) ? slr : 0;
    }

    std::string getNome(){
        return nome;
    }

    std::string getSobrenome(){
        return sobrenome;
    }

    float getSalario(){
        return salario;
    }
    
    void setNome(std::string nm){
        nome = nm;
    }

    void setSobrenome(std::string s_nm){
        sobrenome = s_nm;
    }

    void setSalario(float slr){
        salario = (slr > 0) ? slr : 0; 
    }

    float getSalarioAnual(){
        return getSalario() * 12;
    }

    void aumentaSalario(float porcento){
        float fator = 1 + porcento/100;
        setSalario(getSalario() * fator);
    }

    void exibirFuncionario(){
        std::cout << getNome() << " " << getSobrenome() << " - " << getSalario() << " - " << getSalarioAnual() << std::endl;
    }
};