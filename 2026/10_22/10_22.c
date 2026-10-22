#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int sum0f(int* a, int n) {
//	int sum=0;
//	int s;
//	for (s=0;s < n;s++) {
//		sum += *(a+s);
//	}
//	return sum;
//}

//int* maxPtr(int* a, int n) {
//	int* p;
//	int* result=a;
//	for (p = a+1;p < a+n;p++) {
//		if (*p > *result) {
//			result = p;
//		}
//	}
//	return result;
//}

//自己手写&自己看错误+ai审错后改
//void swapMaxToFront(int* a, int n) {
//	int* p = a;
//	int* max=a;
//	int i = 0;
//	int m = 0;
//	int z = 0;
//	for (i = 1;i < n;i++) {
//		if (*(p + i) > *max) {
//			max = p+i;
//			z = i;
//		}
//	}
//	if (max != p) {
//		int c = *max;
//		*(p+z) = *p;
//		*p = c;
//	}
//	for (m = 0;m < n;m++) {
//		printf("%d", *(p + m));
//	}
//}

//ai优解
void swapMaxToFront(int* a, int n) {
	int* p = a;
	int* max = a;
	int t;

	for (p = a + 1;p < a + n;p++) {
		if (*p > *max) {
			max = p;
		}
	}
	t = *a;
	*a = *max;
	*max = t;
}

int main() {
	int a[5] = { 3,1,4,1,5 };
	swapMaxToFront(a,5);
	//int* m = maxPtr(a, 5);
	//printf("%d", sum0f(a, x));
	//printf("最大值=%d\n", *m);
	//printf("他的下标=%d\n", (int)(m - a));
	//printf("原数组=%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

	return 0;
}