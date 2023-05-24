#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int numero_funcionario, horas_trabalhadas;
    float valor_hora, salario;
    cin >> numero_funcionario;
    cin >> horas_trabalhadas;
    cin >> valor_hora;
    salario = horas_trabalhadas * valor_hora;
    cout << "NUMBER = " << numero_funcionario << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;
    return 0;
}