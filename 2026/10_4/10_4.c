#include<stdio.h>
int main()
{
	int x;
	//float x;
	//int cnt = 0;

	//x = 1;
	//while (cnt < 50) {
	//	int i;
	//	int isPrime = 1;
	//	for (i = 2;i < x;i++) {
	//		if (x % i == 0) {
	//			isPrime = 0;
	//			break;
	//		}
	//	}
	//	if (isPrime == 1) {
	//		cnt++;
	//		printf("%d\t", x);
	//		if (cnt % 5 == 0) {
	//			printf("\n");
	//		}
	//	}
	//	x++;
	//}
	int one, two, five;
	int exit = 0;
	x = 2;
	//x = 0.2;
	for (one = 1;one < x * 10;one++) {
		for (two = 1;two < x * 10/2;two++) {
			for (five = 1;five < x * 10 / 5;five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
					//exit = 1;
					//break;
					goto out;
				}
			}
			//if (exit == 1)break;
		}
		//if (exit == 1)break;
	}
out:
	//int i,x;
	//for (i = 1;i <= 5;i++) {
	//	for (x = 1;x <= 5;x++)printf("*");
	//	printf("\n");
	//}

	return 0;
}