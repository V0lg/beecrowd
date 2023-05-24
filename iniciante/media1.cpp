#include <iostream>
#include <iomanip>
using namespace std;
#define peso1 3.5
#define peso2 7.5
int main(){
    double A, B, MEDIA;
    cin >> A;
    cin >> B;
    MEDIA = (A * peso1 + B * peso2) / (peso1 + peso2);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
    return 0;
}