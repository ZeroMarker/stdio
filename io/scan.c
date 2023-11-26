//
// Created by ttft3 on 2023/7/23.
//
#include <stdio.h>
#define STRSIZE 3
int main() {
    int i;
    float f;
    char ch, str[STRSIZE];
    printf("Please Enter:\n");
    scanf("%d%f", &i, &f);
    printf("i = %d, f = %f\n", i, f);

    scanf("%s", str);
    printf("%s\n", str);
    // access out of border

    while (1) {
        int ret = scanf("%d", &i);
        if (ret != 1) {
            printf("Enter error\n");
            break;
        }
        printf("i = %d\n", i);
    }
    scanf("%d", &i);
    scanf("%*c%c", &ch);
    // 抑制符 吃掉空白字符
    printf("i = %d, ch = %d\n", i, ch);
    printf("%d\n", EOF);
    return 0;
}