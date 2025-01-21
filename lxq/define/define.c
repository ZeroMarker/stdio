#include <stdio.h>
// #define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MAX(a, b)                \
    ({                           \
        typeof(a) A = a, B = b;  \
        ((A) > (B) ? (A) : (B)); \
    })
int main(void) {
    int a = 3, b = 5;
    printf("a = %d\tb = %d\n", a, b);
    printf("MAX = %d\n", MAX(a++, b++));
    printf("a = %d\tb = %d\n", a, b);
    return 0;
}
