//
// Created by ttft3 on 2023/7/23.
//
#include <stdio.h>
#include <windows.h>    // windows
// #include <unistd.h>     // linux
#define STRSIZE 32
#define SEC_YEAR (365LL * 24LL * 60LL * 60LL)

int main() {
    int i = 123;
    printf("i = %4d\n", i);
    // printf("i = %2d", i); 123

    float f = 123.456;
    printf("f = %8.1f\n", f);

    char str[STRSIZE] = "helloworld";
    printf("str = %10.5s\n", str);
    printf("str = %-10.5s\n", str);

    printf("i = %#x\n", i);
    printf("i = %#o\n", i);

    printf("second = %lld\n", SEC_YEAR);
    printf("f = %e\n", f);

    // printf("[%s:%d]", __FUNCTION__ , __LINE__);
    // line buffer
    printf("[%s:%d]\n", __FUNCTION__, __LINE__);
    sleep(5);
    printf("[%s:%d]\n", __FUNCTION__, __LINE__);

    return 0;
}