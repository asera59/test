#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//struct date {
//	int month;
//	int day;
//	int year;
//};
//
//int main(int argc,char const*argv[]) {
	//	const int size = 3;
	//	int board[size][size];
	//	int i, j;
	//	int num0fX;
	//	int num0f0;
	//	int result = -1;
	//
	//	for (i = 0;i < size;i++) {
	//		for (j = 0;j < size;j++) {
	//			scanf("%d", &board[i][j]);
	//		}
	//	}
	//
	//	for (i = 0;i < size && result == -1;i++) {
	//		num0f0 = num0fX = 0;
	//		for (j = 0;j < size;j++) {
	//			if (board[i][j] == 1) {
	//				num0fX++;
	//			}
	//			else {
	//				num0f0++;
	//			}
	//		}
	//		if (num0f0 == size) {
	//			result = 0;
	//		}
	//		else if (num0fX == size) {
	//			result = 1;
	//		}
	//	}
	//
	//	if (result == -1) {
	//		for (j = 0;j < size && result == -1;j++) {
	//			num0f0 = num0fX = 0;
	//			for (i = 0;i < size;i++) {
	//				if (board[i][j] == 1) {
	//					num0fX++;
	//				}
	//				else {
	//					num0f0++;
	//				}
	//			}
	//			if (num0f0 == size) {
	//				result = 0;
	//			}
	//			else if (num0fX == size) {
	//				result = 1;
	//			}
	//		}
	//	}
	//
	//	if (result == -1) {
	//		num0f0 = num0fX = 0;
	//		for (i = 0;i < size;i++) {
	//			if (board[i][i] == 1) {
	//				num0fX++;
	//			}
	//			else {
	//				num0f0++;
	//			}
	//		}
	//		if (num0f0 == size) {
	//			result = 0;
	//		}
	//		else if (num0fX == size) {
	//			result = 1;
	//		}
	//	}
	//
	//	if (result == -1) {
	//		num0f0 = num0fX = 0;
	//		for (i = 0;i < size;i++) {
	//			if (board[i][size-i-1] == 1) {
	//				num0fX++;
	//			}
	//			else {
	//				num0f0++;
	//			}
	//		}
	//		if (num0f0 == size) {
	//			result = 0;
	//		}
	//		else if (num0fX == size) {
	//			result = 1;
	//		}
	//	}
	//	printf("%d",result); 
	//  三子棋

	//double ff = 1234.56789;
	//printf("%E,%f\n", ff, ff);

	//double ff = 1E-10;
	//printf("%E,%f,%.16f\n", ff, ff,ff);

	//printf("%.3f\n", -0.0049);
	//printf("%.30f\n", -0.0049);
	//printf("%.3f\n", -0.00049);
	//printf("%.3f\n", -0.0045);
	//double z = 0.0;
	//printf("%f\n", 12.0 / z);
	//printf("%f\n", -12.0 / z);
	//printf("%f\n", 0.0 / z);
	//printf("%f\n", 12.0 / 0.0);
	//printf("%f\n", -12.0 / 0.0);
	//printf("%f\n", 0.0 / 0.0);
	//printf("%f\n", 12 / 0);
	//float a, b, c;
	//a = 1.345f;
	//b = 1.123f;
	//c = a + b;
	//if (c == 2.468)
	//	printf("相等\n");
	//else
	//	printf("不相等 c=%.6f或c=%.10f", c,c);
	
	//char a = 1;
	//char c = 2;
	//char d = 2;
	//char e = 2;
	//char b = 62;
	////scanf("%d", &a);
	//scanf("%c", &a);
	//printf("a=%d %c '%c',b=%d %c '%c'", a, a, a, b, b, b);

//printf("1123\b\n456\n");
//printf("1123\bA\n456\n");
//printf("112\t456\n");
//printf("11\t456\n");

//struct date today;
//
//today.month = 07;
//today.day = 31;
//today.year = 2014;
//struct date today = { 07,31,2014 };
//struct date thismonth = { .month = 7,.year = 2014 };
//
//printf("Today's date is %i-%i-%i.\n",
//	today.year, today.month, today.day);
//printf("This month is %i-%i-%i.\n",
//	thismonth .year, thismonth.month, thismonth.day);
//
//return 0;
//}
void swap(int*a,int*b)
{
	int* c = *a;
	*a = *b;
	*b = *c;
	printf("%d %d", *a, *b);
}

int main()
{
	int a, b;
	printf("输入两个数：");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
}