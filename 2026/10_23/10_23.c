#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//自己写改加AI改
//int copyArray(int* dst,int dstCap, int* src, int n) {
//	int* srctest = src;
//	if (n>dstCap) {
//		for (;srctest < src + dstCap;dst++, srctest++) {
//			*dst = *srctest;
//		}
//		return dstCap;
//	}
//	else {
//		for (;srctest < src + n;dst++, srctest++) {
//			*dst = *srctest;
//		}
//		return n; 
//	}	
//}

//ai给的
//int copyArray(int* dst, int dstCap, int* src, int n) {
//	int count = (n < dstCap) ? n : dstCap;
//	int* p = src;
//	int* q = dst;
//	int i;
//	for (i = 0;i < count;i++) {
//		*q++ = *p++;
//	}
//	return count;
//}

//自己写改加AI改
//int lastIndexOf(int* a, int n, int x) {
//	int Subscript = -1;
//	for (n--;n >= 0;n--) {
//		if (*(a + n) == x) {
//			Subscript = n;
//			break;
//		}
//	}
//	return Subscript;
//}

//ai给的
//int lastIndexOf(int* a, int n, int x) {
//	int* p;
//	for(p = a + n - 1;p >= a;p--) {
//		if (*p == x)return(int)(p - a);
//	}
//	return -1;
//}

int main() {
	//int d[2] = { 1,4 };
	//int s[5] = { 2,3 };
	//copyArray(d, 2, s, 5);
	
	//int d[5] = { 3,1,4,1,5 };
	//lastIndexOf(d, 5, 1);

	//翁恺编程练习1 自己算法对格式错
	//int A,h,t,o,max;
	//scanf("%d", &A);
	//max = A + 4;
	//for (h = A;h < max;h++) {
	//	printf("\n");
	//	for (t = A;t < max;t++) {
	//		for (o = A;o < max;o++) {
	//			if (t != o && h != t && h != o) {
	//				printf("%d%d%d ", h, t, o);
	//			}
	//		}
	//	}
	//}

	//优化
	//int a, i, j, k, cnt;
	//cnt = 0;
	//scanf("%d", &a);
	//for (i = a;i < a + 4;i++) {
	//	for (j = a;j < a + 4;j++) {
	//		for (k = a;k < a + 4;k++) {
	//			if (i == j || i == k || j == k) {
	//				continue;
	//			}
	//			cnt++;
	//			printf("%d%d%d", i, j, k);
	//			printf(cnt % 6 ? " " : "\n");
	//		}
	//	}
	//}

	//
	int n, a, b, c, d, e, f, g, i;
	scanf("%d", &n);
	

	return 0;
}