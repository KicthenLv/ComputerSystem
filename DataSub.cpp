#include "stdio.h"
/*
	�޷������ļӼ����㣺(�޷�������ʾ���������߷Ǹ�����)
		result < 2^32 ? result : 2 ^ 32 -1
		result < 0 ? result + 2^32 : result
	
*/
int main(void){
	//�޷��żӷ����
	unsigned int a = 0xF0000000;
	unsigned int b = 0xF0000000;
	int c = 0x80000000;  
	int d = 0x80000000;
	printf("%x\n",a);
	printf("%x\n",a+b); 
	printf("%u\n",b);
	printf("%u\n",a+b);//���������32λint���ܱ��ķ�Χ�����Ը�λ���
	printf("%x\n",c);
	printf("%x\n",c+d);
	printf("%d\n",d);
	printf("%d\n",c+d);//�������λ��� ���Ϊ0

	unsigned len = 0;
	int len1 = 0;
	int i = 1;
	printf("%u\n",len-i);   //���Ϊ 0xFFFFFFFF 0x00000000 - 0x00000001 = 0x00000000 + 0xFFFFFFFF = 0xFFFFFFFF
	printf("%d\n",len1-i);  //���Ϊ-1 0x00000000 - 0x00000001 = 0x00000000 + 0x11111111 = 0x11111111 = -1 


	unsigned int te = 0xF0000000;  
	printf("%d\n",te);
	printf("%u\n",te);
	printf("%x\n",te);
	int te1 = 0xF0000000;  
	printf("%d\n",te1);
	printf("%u\n",te1);
	printf("%x\n",te1);

	//�����żӷ����
	int x = 0x40000000;
	int y = 0x40000000;
	printf("%x\n",x);
	printf("%x\n",x+y);
	printf("%d\n",x+y);  //��������λ��λ������λ�����λ����
	return 0;
}