#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int codigo1, quant_pecas1, codigo2, quant_pecas2;
    float valor_unitario1, valor_unitario2, pagamento;
    cin >> codigo1 >> quant_pecas1 >> valor_unitario1;
    cin >> codigo2 >> quant_pecas2 >> valor_unitario2;
    pagamento = quant_pecas1 * valor_unitario1 + quant_pecas2 * valor_unitario2;
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << pagamento << endl;
    return 0;
}