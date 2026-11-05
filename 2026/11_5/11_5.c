#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int value;
	struct _node* next;
}Node;

Node* add(Node* head, int v) {

}

void print(Node* head) {

}

int length(Node* head) {

}

Node* del(Node* head, int v) {

}

void freeAll(Node* head) {

}

int main(void) {
	Node* head = NULL;
	printf("\n空链表\n");
	print(head);
	printf("长度=%d\n", length(head));
	head = del(head, 5);
	print(head);
	printf("\n单节点\n");
	head = add(head, 42);
	print(head);
	printf("长度=%d\n", length(head));
	printf("\n删唯一\n");
	head = del(head, 42);
	print(head);
	printf("\n删尾部\n");
	head = add(head, 1);
	head = add(head, 2);
	head = add(head, 3);
	print(head);
	head = del(head, 3);
	print(head);

}