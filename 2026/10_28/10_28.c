#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void) {
//	int score;
//	scanf("%d", &score);
//	switch (score / 10) {
//		case 10:
//		case 9:
//			printf("A\n");
//			break;
//		case 8:
//			printf("B\n");
//			break;
//		case 7:
//			printf("C\n");
//			break;
//		case 6:
//			printf("D\n");
//			break;
//		default:
//			printf("E\n");
//			break;
//	}
//
//	return 0;
//}

//排成降序了 升序应该是s[j+1]<s[k]
//int main() {
//	int n, i, j, k;
//	int s[105];
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)scanf("%d", &s[i]);
//	for (i = 0;i < n;i++) {
//		for (j = 0;j < n - i - 1;j++) {
//			if (s[j+1] > s[j]) {
//				k = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = k;
//			}
//		}
// }
//	if (n % 2 == 0) {
//		sum = (1.0 * s[n / 2 - 1] + s[n / 2]) / 2;
//			printf("%.1f", sum);
//	}
//	else printf("%d", s[n / 2]);
//}

//int main() {
//	int n, i, a = 0, b = 0, c = 0, d = 0, e = 0;
//	int s[105];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)scanf("%d", &s[i]);
//	for (i = 0;i < n;i++) {
//		switch (s[i] / 10) {
//		case 10:
//		case 9:
//			a++;
//			break;
//		case 8:
//			b++;
//			break;
//		case 7:
//			c++;
//			break;
//		case 6:
//			d++;
//			break;
//		default:
//			e++;
//			break;
//		}
//	}
//	printf("%d %d %d %d %d", a, b, c, d, e);
//}

//int main() {
//	int m, n, i, j;
//	int s[15][15];
//	scanf("%d %d", &m, &n);
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++)scanf("%d", &s[i][j]);
//	}
//	int max = s[0][0], mnum = 0, nnum = 0;
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) {
//			if (s[i][j] > max) {
//				max = s[i][j];
//				mnum = i;
//				nnum = j;
//			}
//		}
//	}
//	printf("%d %d %d", max, mnum, nnum);
//}

//int main() {
//	int n, i, j, k;
//	int s[105];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)scanf("%d", &s[i]);
//	for (i = 0;i < n;i++) {
//		for (j = 0;j < n - i - 1;j++) {
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
//	int m, n, max, am, an, i, j;
//	int s[15][15];
//	scanf("%d %d", &m, &n);
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) scanf("%d", &s[i][j]);
//	}
//	max = s[0][0], am = 0, an = 0;
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

//有关写入的值注意要放在其后面 已改 strlen位置本来在int
//int main() {
//	char s[105] = { 0 };
//	int a = 0, b = 0, c = 0, d = 0, i;
//	scanf("%s", s);
// int len = strlen(s);
//	for (i = 0;i < len;i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z')a++;
//		else if (s[i] >= 'a' && s[i] <= 'z')b++;
//		else if (s[i] >= '0' && s[i] <= '9')c++;
//		else d++;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//}

int main() {
	char s[105];
	char i;
	char* p = s;
	char* q = s;
	scanf("%s %c", &s, &i);
	char* max = s + strlen(s);
	while (p < max) {
		if (*p != i) {
			*q = *p;
			q++;
		}
		p++;
	}
	*q = 0;
	printf("%s", s);
}