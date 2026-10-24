#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void pinyin(int a);

int main()
{
	//翁恺第二题抄
	//int n;
	//scanf("%d", &n);
	//int first = 1;
	//int i = 1;
	//while (i < n) {
	//	first *= 10;
	//	i++;
	//}
	//printf("first=%d\n", first);
	//i = first;
	//while (i < first * 10) {
	//	int t = i;
	//	int sum = 0;
	//	do {
	//		int d = t % 10;
	//		t /= 10;
	//		int p = d;
	//		int j = 1;
	//		while (j < n) {
	//			p *= d;
	//			j++;
	//		}
	//		sum += p;
	//	} while (t > 0);
	//	if (sum == i) {
	//		printf("%d\n", i);
	//	}
	//	i++;
	//}

	//第三题 应该用%-4d而不是\t
	//int n, j, k;
	//scanf("%d", &n);
	//int i = 1;
	//while (i <= n) { 
	//	for (j = 1;j <= i;j++) {
	//		k = i * j;
	//		//printf("%d*%d=%d\t", j, i, k);
	//		printf("%d*%d=%-4d", j, i, k);
	//	}
	//	printf("\n");
	//	i++;
	//}

	//第四题 抄翁恺 没想到真的是暴力 
	//int cnt, m, n, sum, i;
	//scanf("%d %d", &m, &n);
	//cnt = 0;
	//sum = 0;
	//if (m == 1)m = 2;
	//for (i = m;i <= n;i++) {
	//	int isPrime = 1;
	//	int k;
	//	for (k = 2;k*k <= i;k++) {
	//		if (i % k == 0) {
	//			isPrime = 0;
	//			break;
	//		}
	//	}
	//	if (isPrime) {
	//		cnt++;
	//		sum += i;
	//	}
	//}
	//printf("%d %d\n", cnt, sum);

	//第五题 因为默认赋值0 所以输入字母或eof(ctrl z)会是Bingo
	//int cnt, num, max, i;
	//cnt = 0;
	//scanf("%d %d\n", &num, &max);
	//scanf("%d", &i);
	//for (;i != num && cnt < max;cnt++) {
	//	if (i < 0) {
	//		cnt = -1;
	//		break;
	//	}
	//	if (i < num) printf("too small\n");
	//	else printf("too big\n");
	//	scanf("%d", &i);
	//}
	//if (cnt>0&&cnt < 3)printf("lucky you\n");
	//else if (cnt >= 3 && cnt < max)printf("good guess");
	//else if (cnt == max || cnt == -1)printf("game over");
	//else if (cnt == 0)printf("bingo");

	//第六题 int有限 改为double来容纳 如输入2000 连double都要爆了
	//int i, cnt;
	//double a, b, c;
	//double sum = 0.0;
	//a = 2.0, b = 1.0, c = 0.0;
	//scanf("%d", &i);
	//for (cnt = 0;cnt < i;cnt++) {
	//	sum += a / b;
	//	c = a;
	//	a += b;
	//	b = c;
	//}
	//printf("%f %f\n", a, b);
	//printf("%.2f", sum);

	//第七题 暴力 容易超时
	//int a, b, c;
	//scanf("%d/%d", &a, &b);
	//for (c = ((a > b) ? b : a);c > 0;c--) {
	//	if (a % c == 0 && b % c == 0)break;
	//}
	//printf("%d/%d\n", a / c, b / c);

	//第七题 翁恺+ai辗转相除模板
	//int num, den;
	//int a, b, t;
	//scanf("%d/%d", &num, &den);
	//a = num;
	//b = den;
	//while (b != 0) {
	//	t = a % b;
	//	a = b;
	//	b = t;
	//}
	//printf("%d/%d\n", num / a, den / a);

	//第八题	自己写错了 反转会丢前导零 行末多空格 直接作废
	//int i, j, k, sum;
	//sum = 0;
	//scanf("%d", &i);
	//if (i < 0) {
	//	printf("fu ");
	//	i = -i;
	//}
	//else if (i < 10)pinyin(k);
	//else {
	//	do {
	//		j = i % 10;
	//		i /= 10;
	//		sum = sum * 10 + j;
	//	} while (i != 0);

	//	do {
	//		k = sum % 10;
	//		sum /= 10;
	//		pinyin(k);
	//		printf(" ");
	//	} while (sum != 0);
	//}

//第八题 ai结合翁恺的最优解 因为要塞字符串 只能用指针数组或二维数组
//static const char* s[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//int x, mask = 1, t;
//scanf("%d", &x);
//if (x < 0) {
//	printf("fu ");
//	x = -x;
//}
//t = x;
//while (t > 9) {
//	t /= 10;
//	mask *= 10;
//}
//while (mask > 0) {
//	printf("%s", s[x / mask]);
//	if (mask > 1)printf(" ");
//	x %= mask;
//	mask /= 10;
//}
//printf("\n");

//第八题 自己写 对了
int a, n, i, s,j;
i = 0, s = 0, j = 0;
scanf("%d %d", &a, &n);
while (i < n) {
	j = j * 10 + a;
	i++;
	s += j;
}
printf("%d", s);

	return 0;
}

//void pinyin(int a) {
//	if (a == 0)printf("ling");
//	else if (a == 1)printf("yi");
//	else if (a == 2)printf("er");
//	else if (a == 3)printf("san");
//	else if (a == 4)printf("si");
//	else if (a == 5)printf("wu");
//	else if (a == 6)printf("liu");
//	else if (a == 7)printf("qi");
//	else if (a == 8)printf("ba");
//	else if (a == 9)printf("jiu");
//}