#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//enum COLOR{RED,YELLOW,GREEN};

//int main(int argc,char const*argv[]) {
//	int color = -1;
//	char* colorName = NULL;
//	printf("请输入你喜欢的颜色的代码：");
//	scanf_s("%d", &color);
//	switch (color) {
//	case RED:colorName = "red";break;
//	case YELLOW:colorName = "yellow";break;
//	case GREEN:colorName = "green";break;
//	default:colorName = "unknown";break;
//	}
//	printf("你喜欢的颜色是%s\n", colorName);
//
//	return 0;
//}
//enum color { red, yellow, green };
//
//void f(enum color c)
//{
//	printf("%d\n", c);
//}
//
//int main(void)
//{
//	enum color t = red;
//
//	scanf("%d", &t);
//	f(t);
//
//	return 0;
//}
//enum COLOR{RED,YELLOW,GREEN,NumCOLORS};
//
//int main(int argc,char const*argv[]) {
//	int color = -1;
//	char* ColorNames[NumCOLORS] = {
//		"red","yellow","green"
//	};
//	char* colorName = NULL;
//	printf("请输入你喜欢的颜色的代码：");
//	scanf_s("%d", &color);
//	if (color >= 0 && color < NumCOLORS) {
//		colorName = ColorNames[color];
//	}
//	else {
//		colorName = "unknown";
//	}
//	printf("你喜欢的颜色是%s\n", colorName);
//
//	return 0;
//}

enum COLOR{RED=1,YELLOW,GREEN=5,NumCOLORS};

int main(int argc, char const* argv[])
{
	printf("code for GREEN is %d\n", GREEN);
	printf("code for GREEN is %d\n", YELLOW);
	printf("code for GREEN is %d\n", NumCOLORS);
	printf("code for GREEN is %d\n", RED);
	enum COLOR color = 3;
	printf("and color is %d\n", color);
	return 0;
}