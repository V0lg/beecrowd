#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main() {
    double A, B, C, area_tri, area_c, area_r, area_q, area_tra;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    area_tri = (A * C) / 2;
    area_c = pi * pow(C, 2);
    area_tra = (C * (A + B)) / 2;
    area_q = pow(B, 2);
    area_r = A * B;
    printf("TRIANGULO: %.3lf\n", area_tri);
    printf("CIRCULO: %.3lf\n", area_c);
    printf("TRAPEZIO: %.3lf\n", area_tra);
    printf("QUADRADO: %.3lf\n", area_q);
    printf("RETANGULO: %.3lf\n", area_r);
    return 0;
}