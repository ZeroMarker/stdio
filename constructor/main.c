#include <stdio.h>
#include <stdlib.h>

// 模拟全局构造函数
void global_constructor(void) __attribute__((constructor));
void global_constructor(void) {
    printf("Global constructor: Program initializing...\n");
    // 可以在这里分配全局资源或进行初始化操作
}

// 模拟全局析构函数
void global_destructor(void) __attribute__((destructor));
void global_destructor(void) {
    printf("Global destructor: Program cleaning up...\n");
    // 可以在这里释放全局资源
}

int main() {
    printf("Main function: Program running...\n");

    // 主程序逻辑

    return 0;
}
