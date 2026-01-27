#include <iostream>
#include <vector>
#include "Data.h"

int main(){
    int d, m, a;
    int n;

    std::cin >> d >> m >> a >> n;
    Data data(d, m, a);

    for(int i = 0; i < n; i++)
        data.avancarDia();

    data.exibirData();

    
    return 0;
}