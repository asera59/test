#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<math.h>

//#define MAX(a,b)((a)>(b)?(a):(b))
//#define MAX2(a,b)a>b?a:b

//#define RADTODEG(x)((x)*57.29578)
//struct point { int x;int y; };

//double distance(struct point a, struct point b)
//{
//	//scanf("%d &d %d %d", &a.x,&a.y,&b.x,&b.y);
//	//double sumx = (a.x - b.x) ^ 2;
//	//double sumy = (a.y - b.y) ^ 2;
//	//double sum = sumx + sumy;
//	//double result = sqrt(sum);
//	//return result;
//	int dx = a.x - b.x;
//	int dy = a.y - b.y;
//	return sqrt((double)dx * dx + (double)dy * dy);
//}

//double distance(struct point *a, struct point *b)
//{
//	int dx = a->x - b->x;
//	int dy = a->y - b->y;
//	return sqrt((double)dx * dx + (double)dy * dy);
//}
// 
//int gAll = 12; 
//int gAll;
//const int gAll = 12;
//int g2 = gAll;
//int all = 12;

//int f(void)
//{
//	int k = 0;
//	//int gAll = 2;
//	static int gAll = 2;
//	//{
//	//	int gAll = 333;
//	//		printf("in %s gAll = %d\n", __func__, gAll);
//	//	gAll += 2;
//	//	printf("agn in %s gAll = %d\n", __func__, gAll);	
//	//	//return gAll;
//	//}
//	printf("&all=%p\n", &all);
//	printf("&gAll=%p\n", &gAll);
//	printf("&k=%p\n", &k);
//	printf("in %s gAll = %d\n", __func__, gAll);
//	gAll += 2;
//	printf("agn in %s gAll = %d\n", __func__, gAll);
//	return gAll;
//}

//int* f(void)
//{
//	int i = 12;
//	return &i;
//}
//
//void g(void)
//{
//	int k = 24;
//	printf("k=%d\n", k);
//}

struct time { int hour, minutes, seconds; };
struct time timeAdd(struct time future, int n)
{
	future.seconds += n;
	while (future.seconds > 59) {
		future.minutes++;
		future.seconds -= 60;
	}
	while (future.minutes > 59) {
		future.hour++;
		future.minutes -= 60;
	}
	future.hour %= 24;
	return  future;
}

int main() 
{
	int h, m, s,a;
	printf("请输入当前时间：");
	scanf("%d %d %d", &h, &m, &s);
	printf("想要的时间是过了多少秒：");
	scanf("%d", &a);
	struct time now = { h,m,s };
	//timeAdd = { now,a };
	struct time result=timeAdd(now, a);
	printf("现在的时间%02d:%02d:%02d,%d秒后的的时间%02d:%02d:%02d",
		now.hour, now.minutes, now.seconds, a, result.hour, result.minutes, result.seconds);
	//struct point p1 = { 0,0 }, p2 = { 3,4 },p3 = { -1, -1 }, p4 = { 2, 3 };
	//printf("%.2f\n", distance(&p1,&p2));
	//printf("%.2f\n", distance(&p1, &p1));
	//printf("%.2f\n", distance(&p3,&p4));
	//printf("in %s gAll = %d\n", __func__, gAll);
	//f();
	//printf("agn in %s gAll = %d\n", __func__, gAll);
	//f();
	//f();
	//int* p = f();
	//printf("*p=%d\n", *p);
	//g();
	//printf("*p=%d\n", *p);
	//printf("%s:%d\n", __FILE__, __LINE__);
	//printf("%s,%s\n", __DATE__, __TIME__);
	//printf("%f\n", RADTODEG(5 + 2));
	//printf("%f\n", 180 / RADTODEG(1));

	//int x = 1, y = 2;

	//printf("1)MAX(1,2)=%d\n", MAX(1,2));
	//printf("2)MAX(3,7)=%d\n", MAX(3, 7));
	//printf("3)MAX2(1,2)*2=%d\n", MAX(1, 2) * 2);
	//printf("4)MAX(x++,y++)=%d\n", MAX(x++, y++));
	//printf("5)x=%d,y=%d\n", x, y);

	return 0;
}