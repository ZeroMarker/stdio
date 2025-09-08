#define PI 3.14159
#define MAX_BUFFER_SIZE 1024

#define SQUARE(x) ((x) * (x))

int result = SQUARE(5);  // 结果是 25


#if defined(DEBUG)
    printf("Debug mode\n");
#else
    printf("Release mode\n");
#endif

#define CONCAT(a, b) a##b

int CONCAT(var, 1) = 10;  // 等价于 int var1 = 10;

#define STRINGIFY(x) #x

printf(STRINGIFY(Hello World));  // 输出：Hello World


#ifndef MY_HEADER_H
#define MY_HEADER_H

// 头文件内容

#endif  // MY_HEADER_H


#define PRINT_DEBUG(msg) \
    do { \
        printf("Debug: %s\n", msg); \
    } while (0)

PRINT_DEBUG("This is a debug message");

#define SAFE_MAX(a, b) ({ \
    typeof(a) _a = (a); \
    typeof(b) _b = (b); \
    _a > _b ? _a : _b; \
})

#define LOG(fmt, ...) \
    printf("[LOG] " fmt "\n", ##__VA_ARGS__)

LOG("Test");                    // 输出：[LOG] Test
LOG("Value: %d", 42);            // 输出：[LOG] Value: 42
