#include<stdio.h>
//#include<math.h>
int main(void)
{
	//int x;
	//double sum = 0;
	//int cnt = 0;
	//int number[100];
	//scanf_s("%d", &x);
	//while (x != -1) {
	//	number[cnt] = x;
	//	{
	//		int i;
	//		printf("%d\t", cnt);
	//		for (i = 0;i <= cnt;i++) {
	//			printf("%d\t", number[i]);
	//		}
	//		printf("\n");
	//	}
	//	sum += x;
	//	cnt++;
	//	scanf_s("%d", &x);
	//}
	//if (cnt > 0) {
	//	printf("%f\n", sum / cnt);
	//	int i;
	//	for (i = 0;i < cnt;i++) {
	//		if (number[i] > sum / cnt) {
	//			printf("%d\n", number[i]);
	//		}
	//	}
	//}
	//int x;
	//double sum = 0;
	//int cnt,i;
	//printf("请输入数字的数量：");
	//scanf_s("%d", &cnt);
	//if (cnt > 0) {
	//	i = 1+cnt;
	//	int number[i-1];
	//	scanf_s("%d", &x);
	//	while (x != -1) {
	//		number[i-1] = x;
	//		sum += x;
	//		cnt++;
	//		scanf_s("%d", &x);
	//	}
	//}
	//翁恺写的 VS好像不支持
	//const int number = 10;
	//int x;
	//int count[number];
	//int count[number] = { 0 };
	//int i;
	//for (i = 0;i < number;i++) {
	//	count[i] = 0;
	//}
	//scanf_s("%d", &x);
	//while (x != -1) {
	//	if (x >= 0 && x <= 9) {
	//		count[x]++;
	//	}
	//	scanf_s("%d", &x);
	//}
	//for (i = 0;i < number;i++) {
	//	printf("%d:%d\n", i, count[i]);
	//}
	//要gcc 垃圾msvc
	//int a[13] = { [1] = 2,4,[5] = 6 };//{ 2 };//{ 2,4,6,7,1,3,5,9,11,13,23,14,32 };
	//{
	//	int i;
	//	for (i = 0;i < 13;i++) {
	//		printf("%d\t", a[i]);
	//	}
	//	printf("\n");
	//}
	////int x;
	//int loc;
	//printf("请输入一个数字：");
	//scanf_s("%d", &x);
	//loc = search(x, a, sizeof(a) / sizeof(a[0]));
	//if (loc != -1) {
	//	printf("%d在第%d个位置上\n", x, loc);
	//}
	//else {
	//	printf("%d不存在\n", x);
	//}
	//return 0;
	//int isPrime(int x) {
	//	int ret = 1;
	//}
}

//int search(int key, int a[], int length) {
//	int ret = -1;
//	int i;
//	for (i = 0;i < length;i++) {
//		if (a[i] == key) {
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	if (x == 1 || (x % 2 == 0 && x != 2))
//		ret = 0;
//	for (i = 3;i<sqrt(x)/*i < x*/;i += 2) {
//		if (x % i == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}