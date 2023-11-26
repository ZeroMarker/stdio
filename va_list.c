//
// Created by ttft3 on 2023/11/25.
//

#include <stdarg.h>
#include <stdio.h>

void printNumbers(int num, ...) {
    va_list argList;
    va_start(argList, num);

    for (int i = 0; i < num; ++i) {
        int value = va_arg(argList, int);
        printf("%d ", value);
    }

    va_end(argList);
}

int main() {
    printNumbers(3, 1, 2, 3);
    return 0;
}
