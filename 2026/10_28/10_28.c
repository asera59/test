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

//int main() {
//	int n, i;
//	int s[105];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)scanf("%d", &s[i]);
//	if (n % 2 == 0)printf("%.1f", (1.0 * s[n / 2 - 1] + s[n / 2]) / 2);
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

int main() {
	int m, n, i, j;
	int s[15][15];
	scanf("%d %d", &m, &n);
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++)scanf("%d", &s[i][j]);
	}
	int max = s[0][0], mnum = 0, nnum = 0;
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			if (s[i][j] > max) {
				max = s[i][j];
				mnum = i;
				nnum = j;
			}
		}
	}
	printf("%d %d %d", max, mnum, nnum);
}