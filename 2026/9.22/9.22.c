#include<stdio.h>
int main()
{
	//int hour1, minute1;
	//int hour2, minute2;

	//scanf_s("%d %d", &hour1, &minute1);
	//scanf_s("%d %d", &hour2, &minute2);

	//int t1 = hour1 * 60 + minute1;
	//int t2 = hour2 * 60 + minute2;

	//int t = t2 - t1;

	//printf("时间差是%d小时%d分。", t / 60, t % 60);
	//int a, b;
	//scanf_s("%d %d", &a, &b);
	//double c = (a + b) / 2.0;
	//printf("%d和%d的平均值=%f\n", a, b, c);
	//int a = 5;
	//int b = 6;
	//int t;
	//t = a;
	//a = b;
	//b = t;
	//printf("a=%d,b=%d\n", a, b);
	//int a;
	//a = 10;
	//printf("a++=%d\n", a++);
	//printf("a=%d\n", a);
	//printf("++a=%d\n", ++a);
	//printf("a=%d\n", a);
	//int a = 0x80, b = 0xA0, c = 0xC0, d = 0xE0;
	//printf("%d %d %d %d\n", a, b, c, d);/*10000000 10100000 11000000 11100000*/
	//unsigned char P2 = 0x15;
	unsigned char P2 = 0x2B;
	P2 = (P2 & 0x1F) | 0xA0;
	//00101011  10100000
	//P2 = P2 | 0x85;
	//P2 = 0x80;
	printf("%d %x\n", P2, P2);
	//00010101    85          10010101  95
	//printf("%x\n", P2&0x1F);
	////00010101 00011111 00010101 0x15 
	//printf("%d\n", P2&&0x1F);
	//printf("%x\n", 0x0F&0xF0);
	//printf("%d\n", 0x0F&&0xF0);
	printf("%d\n", 5 && 3);    
	printf("%d\n", 5 & 3);     
	printf("%d\n", 0 && 3);    
	return 0;

 }