#include <iostream>
#include <iomanip>
using namespace std;
#define peso1 2
#define peso2 3
#define peso3 5
int main(){
    double A, B, C, MEDIA;
    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA = (A * peso1 + B * peso2 + C * peso3) / (peso1 + peso2 + peso3);
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;
    return 0;
}