#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define pi 3.14159
int main(){
    double r, volume;
    cin >> r;
    volume = 4.0 / 3 * pi * pow(r, 3);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    return 0;
}