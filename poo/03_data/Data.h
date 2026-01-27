
#include <string>
#include <vector>
#include <iostream>
#pragma once

class Data{
    private:
    int dia, mes, ano;
    std::vector <int> diaLimite{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    public:
    
    Data(int d, int m, int a){
        int itMes = m - 1;
        if(itMes < diaLimite.size()){
            if(d > diaLimite[itMes] || d <= 0){
                dia = 1;
                std::cout << "Atributo dia Inválido" << std::endl;
            }
            else
                dia = d;
        }

        else{
            dia = d;
            std::cout << "Atributo mês Inválido" << std::endl;
        }
        
        if(m > 12 || m <= 0){
            mes = 1;
        }
        else
            mes = m;

        if(a < 0)
            ano = 1;
        else
            ano = a;
    }

    int getDia(){
        return dia;
    }
    int getMes(){
        return mes;
    }
    int getAno(){
        return ano;
    }
    void setDia(int d){
        dia = d;
    }
    void setMes(int m){
        mes = m;
    }
    void setAno(int a){
        ano = a;
    }

    void avancarDia(){
        if(dia < diaLimite[mes - 1])
            setDia(getDia() + 1);
        else{
            setDia(1);

            if(mes != 12)
                setMes(getMes() + 1);
            else{
                setMes(1);
                setAno(getAno() + 1);
            }
        }
    }
    
    void exibirData(){
        bool d_dia = (dia >= 10);
        bool d_mes = (mes >= 10);

        if(d_dia == false)
            std::cout << "0";
        std::cout << dia << "/";

        if(d_mes == false)
            std::cout << "0";
        std::cout << mes << "/" << ano << std::endl;

    }
};