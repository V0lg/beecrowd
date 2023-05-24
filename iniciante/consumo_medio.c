#include <stdio.h>
int main() {
    int d_km;
    float combus_g, combus_m;
    scanf("%d", &d_km);
    scanf("%f", &combus_g);
    combus_m = (float)d_km / combus_g;
    printf("%.3f km/l\n", combus_m);
    return 0;
}