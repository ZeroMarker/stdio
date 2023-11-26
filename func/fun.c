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

