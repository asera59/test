#include<stdio.h>

int isPrime(int i)
{
	int ret = 1;
	int k;
	for (k = 2;k < i - 1;k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

//void sum(int begin, int end)
//{
//	int i;
//	int sum = 0;
//	for (i = begin;i <= end;i++) {
//		sum += i;
//	}
//}

//int max(int a, int b)
//{
//	int ret;
//	if (a > b) {
//		ret = a;
//	}
//	else {
//		ret = b;
//	}
//	return ret;
//}

//void cheer(int i)
//{
//	printf("cheer%d\n", i);
//}

int main()
{
	int m, n;
	int sum = 0;
	int cnt = 0;
	int i;

	scanf_s("%d %d", &m, &n);
	if (m == 1)m = 2;
	for (i = m;i <= n;i++) {
		if (isPrime(i)) {
			sum += i;
			cnt++;
		}
		//printf("%d %d", cnt, sum);
	}
	printf("%d %d\n", cnt, sum);

	//sum(1, 10);
	//sum(20, 30);
	//sum(35, 45);

	//int a, b, c;
	//a = 5;
	//b = 6;
	//c = max(10, 12);
	//c = max(a, b);
	//c = max(c, 23);
	//printf("%d\n", max(a, b));

	//cheer(2.4);

	//cheer(2.0);
	
	//double f = 2.4;
	//cheer(f);
	return 0;
}
