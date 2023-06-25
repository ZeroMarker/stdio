#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

// int i = 100;

static int i = 100;

//void func(void) {	
//	printf("[%s]: i = %d\n", __FUNCTION__, i);
//	exit(0);
//}
static void func(void) {	
	printf("[%s]: i = %d\n", __FUNCTION__, i);
	exit(0);
}
void call_func(void) {
	func();
}
