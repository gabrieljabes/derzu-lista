#include <iostream>

    class Data{
        private:
        int dia, mes, ano;

        public:

        Data(){
            dia = 1;
            mes = 1;
            ano = 1;
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
       
        std::string getMesString(){
            switch(mes){
                case 1: return "Janeiro"; break;
                case 2: return "Fevereiro"; break;
                case 3: return "Março"; break;
                case 4: return "Abril"; break;
                case 5: return "Maio"; break;
                case 6: return "Junho"; break;
                case 7: return "Julho"; break;
                case 8: return "Agosto"; break;
                case 9: return "Setembro"; break;
                case 10: return "Outubro"; break;
                case 11: return "Novembro"; break;
                case 12: return "Dezembro"; break;
                default: return "Indefinido"; break;
            }
        }

        void printData(){
            std::cout << dia << " de " << getMesString() << " de " << ano << std::endl;
        }
    };


 int main(){
    Data data;
    int d, m, a;
    std::cin >> d >> m >> a;
    data.setDia(d); data.setMes(m); data.setAno(a);
    data.printData();

    return 0;
}