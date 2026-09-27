#include<stdio.h>
int main()
{
	//int price = 0;
	//int bill = 0;
	//printf("请输入金额：");
	//scanf_s("%d", &price);
	//printf("请输入票面：");
	//scanf_s("%d", &bill);
	//if (bill >= price)
	//{
	//	printf("应该找您：%d\n", bill - price);
	//}
	//else
	//{
	//	printf("你的钱不够\n");
	//}
	//int a, b;
	//printf("请输入两个整数：");
	//scanf_s("%d %d", &a, &b);
	//int max = 0;
	//if (a > b)
	//{
	//	max = a;
	//}
	//else
	//{
	//	max = b;
	//}
	//int max = b;
	//if(a>b)
	//{
	//	max = a;
	//}
	//printf("大的那个是%d\n", max);
	//const int PASS = 60;
	//int score;
	//printf("请输入成绩：");
	//scanf_s("%d", &score);
	//printf("你输入的成绩是%d。\n", score);
	//if (score < PASS)
	//	printf("很遗憾，这个成绩没有及格。");
	//else
	//	printf("祝贺你，这个成绩及格了。"),printf("再见\n");
	//printf("再见\n");
	//int a, b, c;
	//scanf_s("%d %d %d", &a, &b, &c);
	//int max = 0;
	//if(a>b)
	//{
	//	if (a > c)
	//	{
	//		max = a;
	//	}
	//	else
	//	{
	//		max = c;
	//	}
	//}
	//else
	//{
	//	if (b>c)
	//	{
	//		max = b;
	//	}
	//	else
	//	{
	//		max = c;
	//	}
	//}
	//printf("The max is %d\n", max);
	//int x;
	//scanf_s("%d", &x);
	//int f = 0;
	//if (x < 0)
	//{
	//	f = -1;
	//}
	//else if (x == 0)
	//{
	//	f = 0;
	//}
	//else
	//{
	//	f = 2 * x;
	//}
	//printf("%d\n", f);
	int grade;
	printf("输入成绩（0-100）");
	scanf_s("%d", &grade);
	grade /= 10;
	switch (grade)
	{
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
	return 0;
}
