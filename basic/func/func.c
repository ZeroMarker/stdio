// 函数指针数组的应用
#include <stdio.h>
int Add(int x, int y) { return x + y; }

int Sub(int x, int y) { return x - y; }

int Mul(int x, int y) { return x * y; }

int Div(int x, int y) { return x / y; }
void menu() {
    printf("****************\n");
    printf("**1.add 2.sub **\n");
    printf("**3.mul 4.div **\n");
    printf("**   0.exit   **\n");
    printf("****************\n");
}
int main() {
    int input = 0;
    do {
        menu();
        // 函数指针数组的应用,同类型的可以用一个数组
        int (*parr[5])(int, int) = {NULL, Add, Sub, Mul,
                                    Div};  // 刚好数组下标对应菜单数字功能键
        printf("请选择》");
        scanf("%d", &input);
        if (input >= 1 && input <= 4) {
            int x = 0;
            int y = 0;
            int ret = 0;
            printf("请输入两个操作数》");
            scanf("%d%d", &x, &y);
            ret = (parr[input])(x, y);
            printf("ret=%d\n", ret);
        } else if (input == 0) {
            printf("退出程序\n");
            break;
        } else {
            printf("输入错误，重新输入\n");
        }
    } while (input);
    return 0;
}
