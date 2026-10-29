#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//	int n, i, j, k;
//	int s[105];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)scanf("%d", &s[i]);
//	for (i = 0;i < n;i++) {
//		for (j = 0;j < n - 1 - i;j++) {
//			if (s[j] > s[j + 1]) {
//				k = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = k;
//			}
//		}
//	}
//	for (i = 0;i < n;i++) {
//		if (i)printf(" ");
//		printf("%d", s[i]);
//	}
//}

//int main() {
//	int m, n, am = 0, an = 0, i, j, max;
//	int s[15][15];
//	scanf("%d %d", &m, &n);
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++)scanf("%d", &s[i][j]);
//	}
//	max = s[0][0];
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) {
//			if (s[i][j] > max) {
//				max = s[i][j];
//				am = i;
//				an = j;
//			}
//		}
//	}
//	printf("%d %d %d", max, am, an);
//}

//int main() {
//	char s[105];
//	int a = 0, b = 0, c = 0, d = 0, i;
//	scanf("%s", s);
//	for (i = 0;s[i] != '\0';i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z')a++;
//		else if (s[i] >= 'a' && s[i] <= 'z')b++;
//		else if (s[i] >= '0' && s[i] <= '9')c++;
//		else d++;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//}

// j 和 k 声明成了 char，却拿它们当数组下标 已改成int
//int main() {
//	char s[105];
//	char i;
//	int j, k;
//	scanf("%s %c", s, &i);
//	for (j = 0, k = 0;s[j] != '\0';j++) {
//		if (s[j] != i) {
//			s[k] = s[j];
//			k++;
//		}
//	}
//	s[k] = '\0';
//	printf("%s", s);
//}

//int countEven(int* a, int n) {
//	int* p = a;
//	int num = 0;
//	while (p < a + n) {
//		if (*p % 2 == 0)num++;
//		p++;
//	}
//	return num;
//}

//int main() {
//	int s[105];
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &s[i]);
//	}
//	printf("%d", countEven(s,n));
//}

//int main() {
//	char s[15];
//	int a[15];
//	int i, j;
//	scanf("%s", s);
//	int len = strlen(s);
//	for (i = 0;s[i] == '0' && i < len-1;i++);
//	for (j = 0;i<len;i++,j++) a[j]=s[i] - '0';
//	for (i = 0;i<j;i++) {
//		printf("%d", a[i]);
//	}
//}

int main() {
	int s[15][15];
	int m, n, i, j, sum = 0;
	scanf("%d %d", &m, &n);
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++)scanf("%d", &s[i][j]);
	}
	for (j = 0;j < n;j++) {
		for (i = 0;i < m;i++)sum += s[i][j];
		if (j)printf(" ");
		printf("%d", sum);
		sum = 0;
	}
}