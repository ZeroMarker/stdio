#include <stdio.h>

void escape(void);

int main(void) {
    escape();
    return 0;
}

void escape(void) {
    float salary;

    printf("Enter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    // getchar();
    scanf("%f", &salary);  // 4000.00
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");
}
