#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//十进制转二进制正解
//int main() {
//	int n, d[40], k = 0, i;
//	scanf("%d", &n);
//	if (n == 0) {
//		printf("0\n");
//		return 0;
//	}
//	while (n > 0) {
//		d[k++] = n % 2;
//		n /= 2;
//	}
//	for (i = k - 1;i >= 0;i--)printf("%d", d[i]);
//	printf("\n");
//
//	return 0;
//}

//写了50min 错了。。。。。。。。。。。。改见下
//void removeChar(char* s, char c) {
//	char* p = s;
//	char* q = s++;
//	while (p != s+strlen(s)) {
//		if (*p == c) {
//			while (*q == c) {
//				q++;
//			}
//			*p = *q;
//		}
//		p++;
//		q++;
//	}
//	if (*s == 0)*s = ' ';
//}

//尝试自己修 拉完了 。。。
//void removeChar(char* s, char c) {
//	char* p = s;
//	char* q = s;
//	int cnt=0;
//	q++;
//	char* len = s + strlen(s);
//	while (p !=len ) {
//		if (*p == c) {
//			while (*q == c) {
//				q++;
//				cnt++;
//				*p = *q;
//			}while (cnt >= 0) {
//				*(++p) = *(++q);
//				cnt--;
//			}
//		}
//		p++;
//		q++;
//	}
//	if (*s == 0)*s = ' ';
//}

//ai
//void removeChar(char* s, char c) {
//	char* p = s;
//	char* q = s;
//	while (*p != '\0') {
//		if (*p != c) {
//			*q = *p;
//			q++;
//		}
//		p++;
//	}
//	*q = '\0';
//}

//int main() {
//	char s[105] = {0};
//	char c;
//	scanf("%s %c", s, &c);
//	removeChar(s, c);
//	printf("%s", s);
//
//	return 0;
//}

//void filter(char* s, char c) {
//	char* p = s;
//	char* q = s;
//	while (*p != '\0') {
//		if (*p != c) {
//			*q = *p;
//			q++;
//		}
//		p++;
//	}
//	*q = '\0';
//}

//void filter(char* s, char c) {
//	char* p = s;
//	char* q = s;
//	while (*p != '\0') {
//		if (*p != c) {
//			*q = *p;
//			q++;
//		}
//		p++;
//	}
//	*q = '\0';
//}

//void filter(char* s, char c) {
//	char* p = s;
//	char* q = s;
//	while (*p != '\0') {
//		if (*p != c) {
//			*q = *p;
//			q++;
//		}
//		p++;
//	}
//	*q = '\0';
//}

//应该是*q=*p;反了 改了
//void keepDigits(char* s) {
//	char* p = s;
//	char* q = s;
//	while (*p != '\0') {
//		if (*p >= '0' && *p <= '9') {
//			*q = *p;
//			q++;
//		}
//		p++;
//	}
//	*q = '\0';
//}

//注意91-96是[\]^_` 要用|| 已改
//void keepAlpha(char* s) {
//	char* p = s;
//	char* q = s;
//	while (*p != '\0') {
//		if ((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')) {
//			*q = *p;
//			q++;
//		}
//		p++;
//	}
//	*q = '\0';
//}

//int main() {
//	char s[105];
//	scanf("%s", s);
//	keepAlpha(s);
//	printf("%s", s);
//}

//输入可能是-1 所以不能用整数当哨兵值在整数里 改用长度变量 而且p最后加到s[n] 如果没初始化就读垃圾值有可能误判
//int main() {
//	int s[105] = {0};
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &s[i]);
//	}
//	int* p = s;
//	int* q = s;
//	while (p < s+n) {
//		p++;
//		if (*p != *q) {
//			q++;
//			*q = *p;
//		}
//	}
//	for (i = 0;i<n;i++) {
//		if (i)printf(" ");
//		printf("%d", s[i]);
//	}
//}

//上题正解
//int main() {
//	int a[105], n, i, k = 0;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)scanf("%d", &a[i]);
//	for (i = 0;i < n;i++) {
//		if (k == 0 || a[i] != a[k - 1]) {
//			a[k] = a[i];
//			k++;
//		}
//	}
//	for (i = 0;i < k;i++) {
//		if (i)printf(" ");
//		printf("%d", a[i]);
//	}
//}

//int gcd(int a, int b) {
//	int i;
//	while (b != 0) {
//		i = b;
//		b = a % b;
//		a = i;
//	}
//	return a;
//}

//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", gcd(a, b));
//}

//int charToInt(char c) {
//	scanf("%s", &c);
//	printf("%c", c);
//	scanf("%s", &c);
//	printf("%c", c);
//	scanf("%c", &c);
//	printf("%s", c);
//}

//char inToChar(int n) {
//	scanf("%d", &c);
//		printf("'%d'", c);
//		scanf("%d", &c);
//		printf("'%c'", c);
//		scanf("%d", &c);
//		printf("'%c'", c);
//}