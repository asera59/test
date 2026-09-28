#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//int x;
	//int n = 1;
	//int n = 0;
	//scanf_s("%d", &x);
	//if (x > 999)
	//{
	//	n = 4;
	//}
	//else if (x > 99)
	//{
	//	n = 3;
	//}
	//else if (x > 9)
	//{
	//	n = 2;
	//}
	//n++;
	//x /= 10;
	//while (x > 0)
	//{
	//	n++;
	//	x /= 10;
	//	printf("x=%d,n=%d\n", x, n);
	//}
	//do
	//{
	//	x /= 10;	
	//	n++; 
	//} while (x > 0);
	//printf("%d\n", n);
	//int x;
	//int ret = 0;
	//x = 64;
	//int t = x;
	//while (x > 1)
	//{
	//	x /= 2;
	//	ret++;
	//}
	//printf("log2 of %d is %d", t, ret);
	//int n = 3;
	//while (n >= 0)
	//{
	//	printf("%d", n);
	//	n--;
	//}
	//printf("发射\n");
	//srand(time(0));
	//int number = rand() % 100 + 1;
	//int count = 0;
	//int a = 0;
	//printf("我已经想好了一个1到100之间的数\n");
	//printf("(调试)答案是%d\n", number);
	//do {
	//	printf("猜猜这个1到100之间数：");
	//	scanf_s("%d", &a);
	//	count++;
	//	if (a > number) {
	//		printf("你猜的数大了。");
	//	}
	//	else if (a < number) {
	//		printf("你猜的数小了。");
	//	}
	//} while (a != number);
	//printf("太好了，你用了%d次就猜到了答案。\n",count);
	//int number;
	//double sum = 0;
	//int count = 0;
	//scanf_s("%d", &number);
	//while (number != -1) {
	//	sum += number;
	//	count++;
	//	scanf_s("%d", &number);
	//}
	//printf("%f\n", sum / count);
	int x;
	//x = 12345;
	x = 700;
	int digit;
	int ret = 0;
	while (x > 0) {
		digit = x % 10;
		printf("%d", digit);
		ret = ret * 10 + digit;
		//printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
		x /= 10;
	}
	//printf("%d", ret);
	return 0;
}