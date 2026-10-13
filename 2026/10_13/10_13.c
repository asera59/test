#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//char ac[] = { 0,1,2,3,4,5,6,7,8,9 };
	//char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1 };
	//char* p = &ac[0];
	//int i;
	//for (i = 0;i < sizeof(ac) / sizeof(ac[0]);i++) {
	//	printf("%d\n", ac[i]);
	//}
	//while (*p != -1) {
	//	printf("%d\n", *p++);
	//}
	//char* p1 = &ac[5];
	//printf("p=%p\n", p);
	//printf("p+1=%p\n", p + 1);
	//printf("p1-p=%d\n", p1 - p);
	//int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* q = ai;
	//q = p;
	//int* q1 = &ai[6];
	//printf("q=%p\n", q);
	//printf("q1=%p\n", q1);
	//printf("q1-q=%d\n", q1 - q);
	//int number;
	//int* a;
	//int i;
	//printf("输入数量：");
	//scanf_s("%d", &number);
	//a = (int*)malloc(number * sizeof(int));
	//for (i = 0;i < number;i++) {
	//	scanf_s("%d", &a[i]);
	//}
	//for (i = number - 1;i >= 0;i--) {
	//	printf("%d ", a[i]);
	//}
	//free(a);
	//void* p;
	//int cnt = 0;
	//while (cnt<10&&(p = malloc(100 * 1024 * 1024))) {
	//	cnt++;
	//}
	//printf("分配了%d00MB的空间\n", cnt);
	int i = 0;
	char* s = "Hello World";
	char* s2 = "Hello World";
	char s3[] = "Hello World";
	printf("&i=%p\n", &i);
	printf("s=%p\n", s);
	printf("s2=%p\n", s2);
	printf("s3=%p\n", s3);
	//s3[0] = 'B';
	//printf("Here!s3[0]=%c\n", s3[0]);
	s[0] = 'B';
	printf("Here!s[0]=%c\n", s[0]);

	return 0;
}