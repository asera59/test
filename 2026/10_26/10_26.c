#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//abcd没初始化 已改
//int main() {
//	char s[105];
//	int a=0, b=0, c=0, d=0, i;
//	scanf("%s", s);
//	for (i = 0;s[i] != '\0';i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z')a++;
//		else if (s[i] >= 'a' && s[i] <= 'z')b++;
//		else if (s[i] >= '0' && s[i] <= '9')c++;
//		else d++;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//
//	return 0;
//}

//int main() {
//	int i, j, m, n;
//	int s[12][12];
//	scanf("%d %d", &m, &n);
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) {
//			scanf("%d", &s[i][j]);
//		}
//	}
//	for (j = 0;j < n;j++) {
//		for (i = 0;i < m;i++) {
//			if (i)printf(" ");
//			printf("%d", s[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void reverseStr(char* s) {
//	char* p = s;
//	char* q = s + strlen(s) - 1;
//	while (p < q) {
//		int i;
//		i = *p;
//		*p = *q;
//		*q = i;
//		p++;
//		q--;
//	}
//}

//不能写char*s 未初始化 是用来存地址的 应该使用数组储存字符串 已改
//int main() {
//	char s[105];
//	scanf("%s", s);
//	reverseStr(s);
//	printf("%s", s);
//
//	return 0;
//}

//输出值搞成输出下标了。普通数组写成指针数组了，循环顺序相反了，应该先判断。是否越界，再判断值是否相等。两个if逻辑上应该互斥。改见下
//int main() {
//	int n, i, x;
//	int s[105];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)scanf("%d", &s[i]);
//	scanf("%d", &x);
//	for (i = 0;s[i] != x && i < n;i++);
//	if (s[i] == x)printf("%d", i);
//	if (i == n)printf("-1");
//}

//查找下标正解。
//int main() {
//	int n, i, x;
//	int a[105];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0;i < n && a[i] != x;i++);
//	if (i < n)printf("%d\n", i);
//	else printf("-1\n");
//
//	return 0;
//}

//数字反转做成字符串反转了 而且没输入 数组写成指针数组 因为多加了* 改见下
//int main() {
//	char s[15];
//	char* p = s;
//	char* q = s + strlen(s) - 1;
//	while (*q == 0)q--;
//	int i;
//	while (p < q) {
//		i = *q;
//		*q = *p;
//		*p = i;
//		p++;
//		q--;
//	}
//}

//数字反转正解
//int main() {
//	int n, r = 0;
//	scanf("%d", &n);
//	while (n > 0) {
//		r = r * 10 + n % 10;
//		n /= 10;
//	}
//	printf("%d\n", r);
//}

//没处理小于second max的数 改见下
//int secondMax(int* a, int n) {
//	int* q = a;
//	int secondmax = *a;
//	int max = *a;
//	while (q < a + n) {
//		if (*q > max) {
//			secondmax = max;
//			max = *q;
//		}
//		q++;
//	}
//	if (max == secondmax)secondmax = -1;
//
//	return secondmax;
//}

//int secondMax(int* a, int n) {
//	int i;
//	int max = a[0];
//	int snd = -1;
//	int found = 0;
//	for (i = 1;i < n;i++) {
//		if (a[i] > max)max = a[i];
//	}
//	for (i = 0;i < n;i++) {
//		if (a[i] < max && (!found || a[i] > snd)) {
//			snd = a[i];
//			found = 1;
//		}
//	}
//	return found ? snd : -1;
//}
//
//int main() {
//	int s[105];
//	int i, j;
//	scanf("%d", &i);
//	for (j = 0;j < i;j++) {
//		scanf(" %d", &s[j]);
//	}
//	printf("%d", secondMax(s, i));
//}

//优化点 没改 strlen 是 O(n) 的——它要从头数到尾。?每次循环都调一次 → 整个循环变成 O(n?)。但如果字符串长度是 10?，就会慢 10? 倍。改成int len = strlen(s); for (i = 0; i < len; i++)
//只算一次  或for (i = 0; s[i] != '\0'; i++)
//int main() {
//	int i, num=0;
//	char s[105];
//	scanf("%s", s);
//	for (i = 0;i < strlen(s);i++) {
//		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//			num++;
//	}
//	printf("%d", num);
//
//	return 0;
//}

//void avgMax(int* a, int n, double* avg, int* max) {
//	int k;
//	*avg = *a;
//	*max = *a;
//	for (k = 1;k < n;k++) {
//		a++;
//		*avg += *a;
//		if (*a > *max)*max = *a;
//	}
//	*avg /= n;
//}

//int main() {
//	int i, j, max=0;
//	double avg=0;
//	int s[105];
//	scanf("%d", &i);
//	for (j = 0;j < i;j++) {
//		scanf("%d", &s[j]);
//	}
//	avgMax(s, i, &avg, &max);
//	printf("%.2f %d", avg, max);
//}

//int main() {
//	int n, i, j, k, sum=0;
//	int s[15][15];
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		for (j = 0;j < n;j++) {
//			scanf("%d", &s[i][j]);
//		}
//	}
//	for (k = 0;k < n;k++) {
//		sum += s[k][k];
//	}
//	printf("%d", sum);
//}

//int main() {
//	char a[105];
//	char b[105] = {0};
//	int i;
//	scanf("%s", a);
//	char* q = a + strlen(a) - 1;
//	for (i = 0;q >= a;i++, q--) {
//		b[i] = *q;
//	}
//	printf("%s", b);
//
//	return 0;
//}

//int countAboveAvg(int* a, int n) {
//	int k, cnt=0;
//	int* q = a;
//	double sum = 0;
//	for (k = 0;k < n;k++,a++) {
//		sum += *a;
//	}
//	a = q;
//	sum /= n;
//	for (k = 0;k < n;k++, a++) {
//		if (*a > sum)cnt++;
//	}
//	return cnt;
//}

//int main() {
//	int s[105] = {0};
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &s[i]);
//	}
//	printf("%d", countAboveAvg(s, n));
//}

//int main() {
//	char s[105];
//	int i, j = 0;
//	scanf("%s", s);
//	char* q = s + strlen(s) - 1;
//	for (i = 0;&s[i] < q;i++, q--) {
//		if (s[i] != *q) {
//			j = 1;
//			break;
//		}
//	}
//	if (j)printf("NO");
//	else printf("YES");
//}

//void minAndIndex(int* a, int n, int* minVal, int* minIdx) {
//	*minVal = *a;
//	*minIdx = 0;
//	int j;
//	for (j = 1;j < n;j++) {
//		if (a[j] < *minVal) {
//			*minIdx = j;
//			*minVal = a[j];
//		}
//	}
//}

//int main() {
//	int s[105] = { 0 };
//	int i, n, minval, minidx;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		scanf("%d", &s[i]);
//	}
//	minAndIndex(s, n, &minval, &minidx);
//	printf("%d %d", minval, minidx);
//}

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	while (sum != n) {
		if (n / 512 > 0) {
			n -= 512;
			sum += 1000000000;
		}
		else if (n / 256 > 0) {
			n -= 256;
			sum += 100000000;
		}
		else if (n / 128 > 0) {
			n -= 128;
			sum += 10000000;
		}
		else if (n > 64) {
			n -= 64;
			sum += 1000000;
		}
		else if (n > 32) {
			n -= 32;
			sum += 100000;
		}
		else if (n > 16) {
			n -= 16;
			sum += 10000;
		}
		else if (n > 8) {
			n -= 8;
			sum += 1000;
		}
		else if (n > 4) {
			n -= 4;
			sum += 100;
		}
		else if (n > 2) {
			n -= 2;
			sum += 10;
		}
		else {
			n -= 1;
			sum += 1;
		}
	}
}