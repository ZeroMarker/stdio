#include <stdio.h>
#include <stdlib.h>

#define M 3

int main(void) {
    int arr[M] = {1};

    printf("%d\n", sizeof(arr));
    printf("%p\n", arr);

    arr[3] = 10;
    printf("arr[3] = %d\n", arr[3]);

    for(int i = 0; i < M; i++) {
        printf("%p -> %d\n", &arr[i], arr[i]);
    }

    return 0;
}