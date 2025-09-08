#include <stdio.h>
#include <stdlib.h>

double add(double a, double b) { return (a + b); };
double sub(double a, double b) { return (a - b); };
double mul(double a, double b) { return (a * b); };
double divd(double a, double b) { return (a / b); };
double (*p[4])(double, double) = {add, sub, mul, divd};
int main(void) {
    printf("Please add, sub, mul, div:\n");
    char s[3];
    scanf("%s", s);
    int operator= 0;
    double a, b;
    switch (s[0]) {
        case 'a':
            operator= 0;
            break;
        case 's':
            operator= 1;
            break;
        case 'm':
            operator= 2;
            break;
        case 'd':
            operator= 3;
            break;
        default:
            break;
    }
    printf("%d\n", operator);
    printf("Please input two number:\n");
    scanf("%lf %lf", &a, &b);
    double result = p[operator](a, b);
    printf("%lf + %lf = %lf\n", a, b, result);
    exit(0);
}