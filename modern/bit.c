#include <stdio.h>

int main() {
    // 二进制字面量
    int binary = 0b1010;  // 二进制表示的 10
    printf("Binary literal: %d\n", binary);

    // 数字分隔符
    long long bigNumber = 123'456'789'012;  // 更易读的数字
    printf("Big number with separators: %lld\n", bigNumber);

    //char8_t srt[] = u8"你好！";

    bool con = true;

    int* ptr = nullptr;

    constexpr int c = 10 / 2;

    auto i = 5;
    return 0;
}