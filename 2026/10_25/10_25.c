#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//	int i, j, cnt, sum;
//	sum = 0,cnt = 0;
//	scanf("%d", &i);
//	for (j = 3;j <= i;j++) {
//		if (j % 3 == 0 || j % 5 == 0) {
//			sum += j;
//			cnt++;
//		}
//	}
//	printf("%d %d", cnt, sum);
//}

//int main(){
//	int num, j, max, min, i;
//	double k=0;
//	scanf("%d %d", &num, &j);
//	max = j, min = j, k = j;
//	for (i = 1;i < num;i++) {
//		scanf(" %d", &j);
//		if (j > max)max = j;
//		if (j < min)min = j;
//		k += j;
//	}
//	printf("最大值：%d\n最小值：%d\n平均值：%.2f\n", max, min, k/num);
//}

//int main() {
//	int a[105], num, i;
//	int evencnt = 0;
//	int oddcnt = 0;
//	scanf("%d", &num);
//	for (i = 0;i < num;i++) {
//		scanf("%d", &a[i]);
//	}
//	countEvenOdd(a, num, &evencnt, &oddcnt);
//	printf("%d %d", evencnt, oddcnt);
//}


//void countEvenOdd(int* a, int n, int* even, int* odd) {
//	int i;
//	*even = 0;
//	*odd = 0;
//	for (i = 0; i < n; i++) {
//		if (a[i] % 2 == 0) (*even)++;
//		else               (*odd)++;
//	}
//}

//int main() {
//	int a[5] = { 3,1,4,1,5 };
//	int mn, mx;
//	minMax(a, 5, &mn, &mx);
//	printf("%d %d\n", mn, mx);
//}

//void minMax(int* a, int n, int* mn, int* mx) {
//	*mn = *a;
//	*mx = *a;
//	int* b = a;
//	a++;
//	for (;a < b+n;a++) {
//		if (*a > *mx)*mx = *a;
//		if (*a < *mn)*mn = *a;
//	}
//}

//int main() {
//	int a[5] = { 3,-1,0,5,-2 };
//	int poscnt, negcnt, zerocnt;
//	countPNZ(a, 5, &poscnt, &negcnt, &zerocnt);
//	printf("%d %d %d", poscnt, negcnt, zerocnt);
//
//}

//void countPNZ(int* a, int n, int* pos, int* neg, int* zero) {
//	*pos = 0;
//	*neg = 0;
//	*zero = 0;
//	int* z = a;
//	for (;a < z + n;a++) {
//		if (*a == 0)(*zero)++;
//		else if (*a > 0)(*pos)++;
//		else if (*a < 0)(*neg)++;
//	}
//}

//int main() {
//	char s[105];
//	int i;
//	int up = 0, lo = 0, di = 0, ot = 0;
//	scanf("%s", s);
//	for (i = 0;s[i]!='\0';i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z')up++;
//		else if (s[i] >= 'a' && s[i] <= 'z')lo++;
//		else if (s[i] >= '0' && s[i] <= '9')di++;
//		else ot++;
//	}
//	printf("%d %d %d %d\n", up, lo, di, ot);
//
//	return 0;
//}

//int main() {
//	int m, n, i, j;
//	int a[12][12];
//	scanf("%d %d", &m, &n);
//	for (i = 0;i < m;i++) {
//		for (j = 0;j < n;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (j = 0;j < n;j++) {
//		for (i = 0;i < m;i++) {
//			if (i)printf(" ");
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void reverseStr(char* s) {
//	char* p = s;
//	char* q = s + strlen(s) - 1;
//	char t;
//	while (p < q) {
//		t = *p;
//		*p = *q;
//		*q = t;
//		p++;
//		q--;
//	}
//}

//int main() {
//	char s[105];
//	scanf("%s", s);
//	reverseStr(s);
//	printf("%s\n", s);
//
//	return 0;
//}

//for (i = 0;s[i] != '\0';i++)
//if (s[i] >= 'A' && s[i] <= 'Z')
//char* q = s + strlen(s) - 1;
//
//for (i = 0;s[i] != '\0', i++)
//if (s[i] >= 'A' && s[i] <= 'Z')
//char* q = s + strlen(s) - 1;
//
//for (i = 0;s[i] != '\0';i++)
//if (s[i] >= 'A' && s[i] <= 'Z')
//char* q = s + strlen(s) - 1;

//for (i = 0;s[i] != '\0';i++)
//if (s[i] >= 'A' && s[i] <= 'Z')
//char* q = s + strlen(s) - 1;

//int main(void) {
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

int main() {
	int m, n, i, j;
	int a[12][12];
	scanf("%d %d", &m, &n);
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (j = 0;j < n;j++) {
		for (i = 0;i < m;i++) {
			if (i)printf(" ");
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;

}