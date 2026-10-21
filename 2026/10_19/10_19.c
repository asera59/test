#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//
////typedef union {
////	int i;
////	char ch[sizeof(int)];
////}CHI;
////struct date {
////	int month;
////	int day;
////	int year;
////};
//
////struct time {
////	int hour;
////	int minutes;
////	int seconds;
////};
////
////struct time timeUpdate(struct time now);
//
////struct point {
////	int x;
////	int y;
////};
////
////struct rectangle {
////	struct point p1;
////	struct point p2;
////};
////
////void printRect(struct rectangle r) {
////	printf("<%d,%d>to<%d,%d>\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
////}
//// 
////void getStruct(struct point);
////struct point getStruct(void);
////struct point* getStruct(struct point*);
////void output(struct point);
////void print(const struct point* p);
//
//struct point { 
//	int a;
//	int b;
//};
//
//double distance(struct point a, struct point b);
//
//int main(int argc, char const* argv[]) 
////int main(void)
//{
//	struct point one;
//	double x1, x2, y1, y2,x,y,sum,DOS;
//	printf("输入两组地址:");
//	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//	x = x1 - x2;
//	y = y1 - y2;
//	sum = x * x + y * y;
//	DOS=sqrt(sum);
//	printf("%f", DOS);
//	//struct date today;
//	//today = (struct date){ 07,31,2014 };
//
//	////struct date day = {};
//	//struct date day;
//	////day = today;
//	//struct date* pDate = &today;
//
//	//printf("Today's date is %i-%i-%i.\n",
//	//	today.year, today.month, today.day);
//	//printf("The day's date is %i-%i-%i.\n",
//	//	day.year, day.month, day.day);
//	//printf("address of today is %p\n", pDate);
//	//day = today;
//
//	//printf("Today's date is %i-%i-%i.\n",
//	//	today.year, today.month, today.day);
//	//printf("The day's date is %i-%i-%i.\n",
//	//	day.year, day.month, day.day);
//
//	//struct point y = { 0,0 };
//	//getStruct(y);
//	//y = getStruct();
//	//getStruct(&y);
//	//output(y);
//	//output(*getStruct(&y));
//	//print(getStruct(&y));
//	//getStruct(&y)->x = 0;
//	//*getStruct(&y) = (struct point){ 1,2 };
//	//print(&y);
//
//	//int i;
//	//struct rectangle rects[] = {
//	//	{{1,2},{3,4}},
//	//	{{5,6},{7,8}}
//	//};
//	//for (i = 0;i < 2;i++) {
//	//	printRect(rects[i]);
//	//}
//	//struct time testTimes[] = {
//	//	{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
//	//};
//	//int i;
//
//	//for (i = 0;i < 5;++i) {
//	//	printf("Time is %.2i:%.2i:%.2i",
//	//		testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
//
//	//	testTimes[i] = timeUpdate(testTimes[i]);
//
//	//	printf("...one second later it's %.2i:%.2i:%.2i\n",
//	//		testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
//	//}
//	//CHI chi;
//	//int i;
//	//chi.i = 1234;
//	//for (i = 0;i < sizeof(int);i++) {
//	//	printf("%02hhX", chi.ch[i]);
//	//}
//	//printf("\n");
//
//	return 0;
//}
//
////struct time timeUpdate(struct time now)
////{
////	++now.seconds;
////	if (now.seconds == 60) {
////		now.seconds = 0;
////		++now.minutes;
////
////		if (now.minutes == 60) {
////			now.minutes = 0;
////			++now.hour;
////
////			if (now.hour == 24) {
////				now.hour = 0;
////			}
////		}
////	}
////	return now;
////}
////void getStruct(struct point p)
////{
////	scanf("%d", &p.x);
////	scanf("%d", &p.y);
////	printf("%d,%d\n", p.x, p.y);
////}
//
////struct point getStruct(void)
////{
////	struct point p;
////	scanf("%d", &p.x);
////	scanf("%d", &p.y);
////	printf("%d,%d\n", p.x, p.y);
////	return p;
////}
//
////struct point* getStruct(struct point* p)
////{
////	scanf("%d", &p->x);
////	scanf("%d", &p->y);
////	printf("%d,%d\n", p->x, p->y);
////	return p;
////}
////
////void output(struct point p)
////{
////	printf("%d,%d\n", p.x, p.y);
////}
////
////void print(const struct point* p)
////{
////	printf("%d,%d\n", p->x, p->y);
////}

int main()
{
    int i;
    int a[5];
    for (i = 0;i < 5;i++) {
        printf("请输入整数至a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("a[5]={%d,%d,%d,%d,%d}\n", a[0], a[1], a[2], a[3], a[4]);
    for (i = 4;i >= 0;i--) {
        printf("%d", a[i]);
    }
}