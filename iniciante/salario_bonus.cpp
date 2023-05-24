#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define bonus 0.15
int main(){
    string nome;
    double salario_fixo, total_vendas, montante_total;
    cin >> nome;
    cin >> salario_fixo;
    cin >> total_vendas;
    montante_total = salario_fixo + total_vendas * bonus;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << montante_total << endl; 
    return 0;
}