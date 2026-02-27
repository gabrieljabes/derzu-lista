#include "Professor.h"
#include "Aluno.h"

int main(){
    string nome, telefone, cpf, departamento;
    int semestre, qtdDisciplinas;
    float CRA;

    getline(cin, nome);
    getline(cin, telefone);
    getline(cin, cpf);

    Pessoa p(nome, telefone, cpf);
    
    getline(cin, nome);
    getline(cin, telefone);
    getline(cin, cpf);
    cin >> CRA >> semestre;

    Aluno a(nome, telefone, cpf, CRA, semestre);
    cin.ignore();

    getline(cin, nome);
    getline(cin, telefone);
    getline(cin, cpf);
    cin >> qtdDisciplinas;
    cin.ignore();
    getline(cin, departamento);

    Professor pr(nome, telefone, cpf, qtdDisciplinas, departamento);

    p.exibir(); a.exibir(); pr.exibir();
}