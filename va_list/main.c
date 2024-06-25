#include <stdarg.h>

void myPrintf(const char *format, ...) {
    va_list args;
    va_start(args, format);  // 初始化 args，从 format 开始获取参数

    for (int i = 0; format[i] != '\0'; i++) {
        switch (format[i]) {
            case 'd':
                printf("%d ", va_arg(args, int));
                break;
            case 'f':
                printf("%f ", va_arg(args, double));
                break;
            case 's':
                printf("%s ", va_arg(args, char*));
                break;
            // 可以添加更多的 case 来处理其他类型的参数
        }
    }

    va_end(args);  // 清理工作
}

int main() {
    myPrintf("d f s", 10, 3.14, "Hello");
    return 0;
}