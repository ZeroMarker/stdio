/*
A program for simple calculator with add, sub, mul and div functions.

Usage:
1. Enter 'a' for addition, 's' for subtraction, 'm' for multiplication, 'd' for
division.
2. Enter two numbers to perform the operation.
*/

#include <stdio.h>
#include <stdlib.h>

double add(double a, double b) { return (a + b); }

double sub(double a, double b) { return (a - b); }

double mul(double a, double b) { return (a * b); }

double divd(double a, double b) {
    if (b == 0) {
        printf("Error: divisor should not be zero!\n");
        exit(1);
    }
    return (a / b);
}

typedef double (*pFun)(double, double);
pFun funcs[4] = {add, sub, mul, divd};

int main(void) {
    char op[4] = {'+', '-', '*', '/'};
    printf("Please select an operator (a, s, m, d):\n");

    char buf[1024];
    fgets(buf, sizeof(buf), stdin);
    int operator= - 1;
    switch (buf[0]) {
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
            operator= - 1;
            break;
    }
    if (operator== - 1) {
        printf("Invalid input!\n");
        exit(1);
    }

    printf("Enter two numbers:\n");
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("%.2lf %c %.2lf = %.2lf\n", a, op[operator], b, funcs[operator](a, b));
    return 0;
}

typedef double (*pFun)(double, double);
pFun funcs[4] = {add, sub, mul, divd};

int main(void) {
    char op[4] = {'+', '-', '*', '/'};
    printf("Please select an operator (a, s, m, d):\n");

    char buf[1024];
    fgets(buf, sizeof(buf), stdin);
    int operator= - 1;
    switch (buf[0]) {
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
            operator= - 1;
            break;
    }
    if (operator== - 1) {
        printf("Invalid input!\n");
        exit(1);
    }

    printf("Enter two numbers:\n");
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("%.2lf %c %.2lf = %.2lf\n", a, op[operator], b, funcs[operator](a, b));
    return 0;
}
