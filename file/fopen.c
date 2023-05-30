#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#if 0
func() {

}
#endif

int main(void) {
	FILE *fp;
    fp = fopen("tmp", "r");
    if(fp == NULL) {
        fprintf(stderr, "fopen():%s\n", strerror(errno));
        exit(1);
    }
    exit(0);
}
