#include <stdio.h>

#include "math.h"

extern int add(int a, int b);
int main() {
    printf("%d + %d = %d\n", 1, 2, add(1, 2));
    return 0;
}