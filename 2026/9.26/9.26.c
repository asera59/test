#include <stdio.h>
int main()
{
	//int hour1, minute1;
	//int hour2, minute2;

	//scanf_s("%d %d", &hour1, &minute1);
	//scanf_s("%d %d", &hour2, &minute2);

	//int ih = hour2 - hour1;
	//int im = minute2 - minute1;
	//if (im < 0) {
	//	im = 60 + im;
	//	ih--;
	//}
	//
	//printf("时间差是%d小时%d分。\n", ih, im);
	//printf("%d\n", 5 == 3);
	//printf("%d\n", 5 > 3);
	//printf("%d\n", 5 <= 3);
	//printf("%d\n", 7 >= 3 + 4);
	//unsigned char x = 0xA5;
	////unsigned char x = 0x00;
	////unsigned char x = 0xff;
	//int i;
	//printf("x=0x%02x\n", x);
	//for(i=0;i<8;i++)
	//{
	//	//if (x & (1 << i))
	//	//if (~x & (1 << i))
	//	if ((x>>i)&1)
	//	{
	//		printf("bit%d=1\n", i);
	//	}
	//}
	////10100101  00000001 00000010
	//int a = 0;
	//if (0 && a++) {
	//	printf("A\n");
	//}
	//printf("a=%d\n", a);

	//int b = 0;
	//if (1 && b++) {
	//	printf("B\n");
	//}
	//printf("b=%d\n",b);
	//int price =0 ;
	//int bill = 0;
	//printf("请输入金额：");
	//scanf_s("%d", &price);
	//printf("请输入票面：");
	//scanf_s("%d", &bill);
	//if (bill >= price) 
	//{
	//	printf("应该找您：%d\n", bill - price);
	//}
	const int minor = 35;
	int age = 0;
	printf("请输入你的年龄：");
	scanf_s("%d", &age);
	printf("你的年龄是%d岁。\n", age);
	if(age<minor)
	{
		printf("年轻是美好的，");
	}
	printf("年龄决定了你的精神世界，好好珍惜吧。\n");
	return 0;
}