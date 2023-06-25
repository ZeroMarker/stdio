#include <stdio.h>

int i;

void print_star() {
    for(i = 0; i < 5; i++) {
        printf("*");
    }
    printf("\n");
    printf("[%s], i = %d\n", __FUNCTION__, i);
}
int main(void) {
    for(i = 0; i < 5; i++) {
        print_star();
    }
    printf("[%s], i = %d\n", __FUNCTION__, i);
    return 0;
}
