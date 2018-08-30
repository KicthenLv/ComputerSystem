#include "stdio.h"
#include "stdlib.h"

//测试无符号负数的十六进制表示

int main(void){
    unsigned int  a= 0xFFFFFFFF;
	unsigned int  b= 0x81000000;
	printf("%u\n",a);
	printf("%d\n",b);
	return 0;
}