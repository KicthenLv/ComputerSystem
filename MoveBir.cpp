#include "stdio.h"

int fun1(unsigned w){
	return (int)((w<<24)>>24);
}

int fun2(unsigned w){
	return ((int)w<<24)>>24;
}

int main(void){
	unsigned a = 127;
	unsigned b = 128;
	unsigned c = 255;
	unsigned d = 256;
	printf("%d\n",fun1(a));
	printf("%d\n",fun1(b));
	printf("%d\n",fun2(a));
	printf("%d\n",fun2(b));
	printf("%d\n",fun1(c));
	printf("%d\n",fun1(d));
	printf("%d\n",fun2(c));
	printf("%d\n",fun2(d));
	return 0;
}

