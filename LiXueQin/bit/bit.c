#include <stdio.h>

/*
确定要获取的位数范围，即m到n。
创建一个掩码，使得掩码的第m到第n位为1，其余位为0。可以通过以下步骤来创建掩码：
首先，创建一个全为1的初始掩码，可以使用 mask = 0xFFFFFFFF。
然后，将初始掩码左移m位，即 mask = mask << m。
接下来，创建一个辅助掩码，全为1，长度为n-m+1，可以使用 (1 << (n - m + 1)) - 1。
将辅助掩码左移m位，即 helper_mask = helper_mask << m。
最后，将初始掩码与辅助掩码进行按位与操作，即 mask = mask & helper_mask。
返回生成的掩码。
*/
unsigned int get_mask(int m, int n) {
	//	unsigned int mask = ~0; // B1111 1111
   	// mask = mask << m;
    unsigned int mask = (1 << (n - m + 1)) - 1;
    mask = mask << m;
    //mask = mask & helper_mask;
    return mask;
}
    
int main(void) {
	int i = 12; // B1100
	int j = 8; // B0100
	unsigned int num = 675;
	unsigned int mask = get_mask(4, 6); // start digit, end digit
	printf("mask = %u\n", mask);
	num = num & mask;
	printf("num 4 ~ 6bit = %u\n", num);
	return 0;
}
