#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void swap(int* a, int* b)
//{
//    int c = *a;
//    *a = *b;
//    *b = c;
    //printf("%d %d", *a, *b);
//}

void reverse(int* a, int n);

int main() {
    //int y;
    //printf("请输入年份：");
    //scanf("%d", &y);
    //if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
    //    printf("是闰年");
    //}
    //else printf("不是闰年");
    
    //int i,t;
    //int a[5];
    //for (i = 0;i < 5;i++) {
    //    printf("请输入整数至a[%d]:", i);
    //    scanf("%d", &a[i]);
    //}
    //printf("a[5]={%d,%d,%d,%d,%d}\n", a[0], a[1], a[2], a[3], a[4]);
    //for (i = 0;i <5/2 ;i++) {
    //    t = a[i];
    //    a[i] = a[4 - i];
    //    a[4 - i] = t;
    //}
    //for (i = 0;i < 5;i++) {
    //    printf("%d", a[i]);
    //}

    //int a, b;
    //printf("输入两个数：");
    //scanf("%d %d", &a, &b);
    //swap(&a, &b);
    //printf("%d %d\n", a, b);
    int a[5];
    int i;
    for (i = 0;i < 5;i++) {
        scanf("%d", &a[i]);
    }
    reverse(a, 5);
    for (i= 0;i < 5;i++) {
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
} 

void reverse(int* a, int n)
{
    int c;
    int* p = a;
    int* q = a + n - 1;
    while (p < q) {
        c = *p;
        *p = *q;
        *q = c;
        p++;
        q--;
    }
}