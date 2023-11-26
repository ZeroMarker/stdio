#include <stdbool.h>
#include <stdio.h>

void str_connect(void);
void bools(void);
void escape(void);

int main(void) {
    str_connect();
    bools();
    escape();
    return 0;
}

void str_connect(void) {
    printf(
        "Hello, "
        "World"
        "!\n");
}
void bools(void) {
    bool qed = 3 > 2 ? true : false;
    if (qed) {
        printf("bool var\n");
    }
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
