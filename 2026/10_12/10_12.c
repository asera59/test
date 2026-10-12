#include<stdio.h>

//void f(int* p);
//void g(int k);

//void swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}

void minmax(int a[], int len, int* min, int* max)
{
	int i;
	printf("minmax sizeof(a)=%lu\n", sizeof(a));
	printf("minmax a=%p\n", a);
	a[0] = 1000;
	*min = *max = a[0];
	for (i = 1;i < len;i++) {
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max) {
			*max = a[i];
		}
	}
}

//int divide(int a, int b, int* result)
//{
//	int ret = 1;
//	if (b == 0)ret = 0;
//	else {
//		*result = a / b;
//	}
//	return ret;
//}

int main()
{
	//int n;
	//int i;
	//double sum = 0.0;
	////int sign = 1;
	//double sign = 1.0;
	//scanf_s("%d", &n);
	//for (i = 1;i <= n;i++) {
	//	//sum += 1.0 / i;
	//	//sum += sign*1.0 / i;
	//	sum += sign / i;
	//	sign = -sign;
	//}

	//printf("f(%d)=%f\n", n, sum);

	//int x;
	//scanf_s("%d", &x);
	//
	//int mask = 1;
	//int t = x;
	//while (t > 9) {
	//	t /= 10;
	//	mask *= 10;
	//}
	//printf("x=%d,mask=%d\n", x, mask);
	//do {
	//	int d = x / mask;
	//	printf("%d", d);
	//	if (mask > 9) {
	//		printf(" ");
	//	}
	//	x %= mask;
	//	mask /= 10;
	//} while (mask > 0);
	//printf("\n");

	//int a, b;
	//int min;

	//scanf_s("%d %d", &a, &b);
	//if (a < b) {
	//	min = a;
	//}
	//else min = b;
	//int ret = 0;
	//int i;
	//for (i = 1;i <= min;i++) {
	//	if (a % i == 0) {
	//		if (b % i == 0) {
	//			ret = i;
	//		}
	//	}
	//}
	//printf("%d和%d的最大公约数是%d\n", a, b, ret);
	//
	//int a, b;
	//int t;
	//scanf_s("%d %d", &a, &b);
	//while (b != 0) {
	//	t = a % b;
	//	a = b;
	//	b = t;
	//	printf("a=%d,b=%d,t=%d\n", a, b, t);
	//}
	//printf("gcd=%d\n", a);

	//int i = 6;
	//printf("&i=%p\n", &i);
	//f(&i);
	//g(i);

	//int a = 5;
	//int b = 6;
	//swap(&a, &b);
	//printf("a=%d,b=%d\n", a, b);

	int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55 };
	int min, max;
	printf("main sizeof(a)=%lu\n", sizeof(a));
	printf("main a=%p\n", a);
	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
	printf("a[0]=%d\n", a[0]);
	printf("min=%d,max=%d\n", min, max);
	int* p = &min;
	printf("*p=%d\n", *p);
	printf("p[0]=%d\n", p[0]);
	printf("*a=%d\n", *a);
	//int b[] = a;
	int* q = a;

	//int a = 5;
	//int b = 2;
	//int c;
	//if (divide(a, b, &c)) {
	//	printf("%d/%d=%d\n", a, b, c);
	//}
	return 0;
}

//void f(int* p) 
//{
//	printf("p=%p\n", p);
//	printf("*p=%d\n", *p);
//	*p = 26;
//}
//
//void g(int k)
//{
//	printf("k=%d\n", k);
//}