#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

//int i = 10;

int i = 10;

int main(void) {
	printf("[%s]: i = %d\n", __FUNCTION__, i);
	func();
	exit(0);
}
