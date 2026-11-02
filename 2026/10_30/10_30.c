#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//	char s[105];
//	int i, cnt = 0;
//	scanf("%s", s);
//	for (i = 0;s[i] != '\0';i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z') {
//			s[i] = 'a' - 'A' + s[i];
//			cnt++;
//		}
//	}
//	printf("%s %d", s, cnt);
//}

//int main() {
//	int m, n, i, j;
//	int s[15][15];
//	scanf("%d %d", &m, &n);
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++)scanf("%d", &s[i][j]);
//	}
//	for (j = 0;j < n;j++) {
//		for (i = 0;i < m;i++) {
//			if (i)printf(" ");
//			printf("%d", s[i][j]);
//		}
//		printf("\n");
//	}
//}

//本质看图说话 优美及普适性强写法见下
//int main() {
//	int n, i, j, num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &j);
//		if (j == 0)num0++;
//		else if (j == 1)num1++;
//		else if (j == 2)num2++;
//		else if (j == 3)num3++;
//		else if (j == 4)num4++;
//		else if (j == 5)num5++;
//		else if (j == 6)num6++;
//		else if (j == 7)num7++;
//		else if (j == 8)num8++;
//		else num9++;
//	}
//	printf("%d %d %d %d %d %d %d %d %d %d", num0, num1, num2, num3, num4, num5, num6, num7, num8, num9);
//}

//int main() {
//	int n, i, x, cnt[10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &x);
//		cnt[x]++;
//	}
//	for (i = 0;i < 10;i++) {
//		if (i)printf(" ");
//		printf("%d", cnt[i]);
//	}
//	printf("\n");
//}

//int main() {
//	char s[105];
//	int num = 0, i;
//	scanf("%s", s);
//	for (i = 0;s[i] != '\0';i++) {
//		if (s[i] >= 'a' && s[i] <= 'z')s[i] = 'A' - 'a' + s[i];
//		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')num++;
//	}
//	printf("%s %d", s, num);
//}

//int main() {
//	int n, k, i, s[105], j, m;
//	scanf("%d %d", &n, &k);
//	for (i = 0;i < n;i++)scanf("%d", &s[i]);
//	for (i = 0;i < n;i++) {
//		for (j = 0;j < n - i - 1;j++) {
//			if (s[j] > s[j + 1]) {
//				m = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = m;
//			}
//		}
//	}
//	printf("%d", s[k-1]);
//}

//错在不知道%s遇到空格就停
//int strToTnt(char* s) {
//	int a = 0, b = 0, i, j, sum;
//	for (i = 0;s[i] != ' ';i++)a = a * 10 + (s[i]-'0');
//	for (j=i+1;s[j] != '\0';j++)b = b * 10 + (s[j]-'0');
//	sum = a + b;
//	return sum;
//}
//
//int main() {
//	char s[15];
//	scanf("%s", s);
//	printf("%d", strToTnt(s));
//}

//正解
int strToInt(char* s) {
	int i, n = 0;
	for (i = 0;s[i] != '\0';i++)n = n * 10 + (s[i] - '0');
	return n;
}

int main() {
	char s1[105], s2[105];
	scanf("%s %s", s1, s2);
	printf("%d\n", strToInt(s1) + strToInt(s2));
	return 0;
}