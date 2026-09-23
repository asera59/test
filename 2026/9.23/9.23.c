//01011010 &00001111 00001010 0x0A
//01000000 |00001111	01001111 0x4F
//00001111<<4 11110000 0xF0
//10101010 ^00001111 10100101 0xA5
//~00111100 11000011 0xC3
#include<stdio.h>

int main()
{
	//printf("Q1 0x5A&0x0F=%x(%d)\n", 0x5A & 0x0F, 0x5A & 0x0F);
	//printf("Q2 0x40|0x0F=%x(%d)\n", 0x40 | 0x0F, 0x40 | 0x0F);
	//printf("Q3 0x0F<<4=%x(%d)\n", 0x0F << 4, 0x0F << 4);
	//printf("Q4 0xAA^0x0F=%x(%d)\n", 0xAA ^ 0x0F, 0xAA ^ 0x0F);
	//printf("Q5 ~0x3C=%x(%d)\n", ~0x3C, ~0x3C);
	//
	//printf("~0x0F=%x\n", ~0x0F);
	//unsigned char x = ~0x0F;
	//printf("x=~0x0F=%x\n", x);
	//unsigned char y = 0x0F;
	//printf("~y(yÊÇuchar)=%x\n", ~y);

	//printf("0x10<<4=%x\n", 0x10 << 4);
	//unsigned char z = 0x10 << 4;
	//printf("%x\n", z);
	//printf("%x\n", ~0x1E);
	//unsigned char z = ~0x1E;
	//printf("%x\n", z);
	unsigned char led = 0x00;
	unsigned char t;
	int i = 0;
	//for (i = 0;i < 3;i++)
	//{
	//	printf("%d\n", i);
	//}
	//for (i = 0;i <= 3;i++)
	//{
	//	printf("%d\n", i);
	//}
	for (i = 0;i < 8;i++)
	//for (i = 0;i < 8;++i)
	{
		//printf("%d\n", i);
		//printf("%d\n", ++i);
		//printf("%d\n", i++);
		led |= (1<<i);
		t = ~led;
		printf("%02x\n", t);
		//printf("%02x\n", ~led & 0xff);
		led &= ~(1 << i);
	}
	return 0;
}