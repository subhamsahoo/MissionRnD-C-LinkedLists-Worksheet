/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>

struct node {
	int num;
	struct node *next;
};
struct node * removeKthNode(struct node *head, int K) {
	int k = 0;
	struct node *traversal = head, *previous, *temp = NULL;
	while (traversal != NULL)
	{

		k++;
		if (k%K == 0)
		{
			temp = traversal;
			previous->next = traversal->next;
		}
		previous = traversal;
		traversal = traversal->next;
	}
	return head;
}

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL || K < 1)
		return NULL;
	struct node *traversal, *temp,*newhead;
	if (K == 1)//if k value is 1 than deleting all the nodes of a linkedlist
	{
		traversal = head;
		while (traversal != NULL)
		{
			temp = traversal->next;
			free(traversal);
			traversal = temp;
		}
		head = NULL;
		return head;
	}
	else//k value greater than 1 calling removeKthnode function
	{
		newhead = removeKthNode(head, K);
		return newhead;
	}
}