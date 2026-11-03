#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"11_3.h"


//void prtBin(unsigned int number) {
//	unsigned mask = 1u << 31;
//	for (;mask;mask >>= 1)printf("%d", number & mask ? 1 : 0);
//	printf("\n");
//}

//struct U0 {
//	unsigned int leading : 3;
//	unsigned int FLAG1 : 1;
//	unsigned int FLAG2 : 1;
//	int trailing : 27;
//};

//const int BLOCK_SIZE = 20;
//
//Array array_create(int init_size) {
//	Array a;
//	a.size = init_size;
//	a.array = (int*)malloc(sizeof(int) * a.size);
//	return a;
//}
//
//void array_free(Array* a) {
//	free(a->array);
//	a->array = NULL;
//	a->size = 0;
//}
//
//int array_size(const Array* a) {
//	return a->size;
//}
//
//int* array_at(Array* a, int index) {
//	if (index >= a->size)array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size);
//	return&(a->array[index]);
//}
//
//void array_inflate(Array* a, int more_size) {
//	int* p = (int*)malloc(sizeof(int)*(a->size + more_size));
//	int i;
//	for (i = 0;i < a->size;i++)p[i] = a->array[i];
//	free(a->array);
//	a->array = p;
//	a->size += more_size;
//}

typedef struct _node {
	int value;
	struct _node* next;
}Node;

int main() {
	Node* head = NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			Node* p = (Node*)malloc(sizeof(Node));
			p->value = number;
			p->next = NULL;
			Node* last = head;
			if (last) {
				while (last->next) last = last->next;
				last->next = p;
			}
			else head = p;
		}
	} while (number != -1);

	//	Array a = array_create(100);
//	printf("%d\n", array_size(&a));
//	*array_at(&a, 0) = 10;
//	printf("%d\n", *array_at(&a, 0));
//	int number = 0;
//	int cnt = 0;
//	while (number != -1) {
//		scanf("%d", &number);
//		*array_at(&a, cnt++) = number;
//	}
//	array_free(&a);
	
	//int number;
	//scanf("%d", &number);
	//number = 0xaaaaaaaa;
	//unsigned mask = 1u << 31;
	//for (;mask;mask >>= 1) printf("%d", number & mask ? 1 : 0);
	//printf("\n");

	//struct U0 uu;
	//uu.leading = 2;
	//uu.FLAG1 = 0;
	//uu.FLAG2 = 1;
	//uu.trailing = 0;
	//printf("sizeof(uu)=%zu\n", sizeof(uu));
	//prtBin(*(int*)&uu);

	//int a = 0x0f;//00001111
	//int b = 0x35;//00110101
	//printf("%#04x\n", a & b);
	//printf("%x\n", a | b);
	//printf("%x\n", a ^ b);
	//printf("%x\n", ~a);
	//printf("%x\n", a << 2);
	//printf("%x\n", b >> 2);

	return 0;
}
