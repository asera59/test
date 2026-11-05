#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int value;
	struct _node* next;
}Node;

Node* add(Node* head, int v) {
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = v;
	p->next = NULL;
	if (head == NULL)return p;
	Node* last = head;
	while (last->next)last = last->next;
	last->next = p;
	return head;
}

void print(Node* head) {
	Node* p = head;
	while (p) {
		printf("[%d]->", p->value);
		p = p->next;
	}
	printf("NULL\n");
}

Node* del(Node* head, int v) {
	Node* p = head;
	Node* q = NULL;
	while (p) {
		if (p->value == v) {
			if (q)q->next = p->next;
			else head = p->next;
			free(p);
			return head;
		}
		q = p;
		p = p->next;
	}
	return head;
}

int length(Node* head) {
	int cnt = 0;
	Node* p = head;
	while (p) {
		cnt++;
		p = p->next;
	}
	return cnt;
}

void freeALL(Node* head) {
	Node* p = head;
	while (p) {
		Node* tmp = p->next;
		free(p);
		p = tmp;
	}
}

int main(void) {
	Node* head = NULL;
	//head = add(head, 1);
	//print(head);
	//head = add(head, 2);
	//print(head);
	//head = add(head, 3);
	//print(head);
	//printf("长度=%d\n", length(head));
	//head = del(head, 2);
	//print(head);
	//head = del(head, 1);
	//print(head);
	print(head);
	printf("长度=%d\n", length(head));
	head = del(head, 5);
	print(head);
	head = add(head, 42);
	print(head);
	printf("长度=%d\n", length(head));
	head = del(head, 42);
	print(head);
	printf("长度=%d\n", length(head));
	head = add(head, 1);
	head = add(head, 2);
	head = add(head, 3);
	print(head);
	head = del(head, 3);
	print(head);
	head = del(head, 99);
	print(head);
	head = del(head, 1);
	head = del(head, 2);
	print(head);
	printf("长度=%d\n", length(head));
	freeALL(head);
	
	return 0;
}