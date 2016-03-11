/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
#include<math.h>
struct node {
	int num;
	struct node *next;
};
int insertion(struct node **head, int n)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->num = n;
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return 0;
	}
	newnode->next = *head;
	*head = newnode;
}


struct node * numberToLinkedList(int N) {
	struct node *head = NULL;
	if (N == 0)
	{
		insertion(&head, N);
		return head;
	}
	int num = abs(N), digit;
	

	while (num>0)
	{
		digit = num % 10;
		insertion(&head, digit);
		num = num / 10;
	}
	return head;
}