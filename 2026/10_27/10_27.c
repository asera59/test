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
void removeChar(char* s, char c) {
	char* p = s;
	char* q = s;
	while (*p != '\0') {
		if (*p != c) {
			*q = *p;
			q++;
		}
		p++;
	}
	*q = '\0';
}

int main() {
	char s[105] = {0};
	char c;
	scanf("%s %c", s, &c);
	removeChar(s, c);
	printf("%s", s);

	return 0;
}