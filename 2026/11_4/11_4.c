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

Node* del(Node* head, int v) {

}

int length(Node* head) {

}

void freeALL(Node* head) {

}

int main(void) {
	Node* head = NULL;
	head = add(head, 1);
	head = add(head, 2);
	head = add(head, 3);
	print(head);
	printf("³¤¶È=%d\n", length(head));
	head = del(head, 2);
	print(head);
	head = del(head, 1);
	printf(head);
	freeALL(head);
	
	return 0;
}