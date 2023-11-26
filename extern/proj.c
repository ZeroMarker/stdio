#include "proj.h"

#include <stdio.h>
#include <stdlib.h>
extern int i;

void func(void) {
    printf("[%s]: i = %d\n", __FUNCTION__, i);
    exit(0);
}
