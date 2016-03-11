/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	//since the data in the linkedlist is a single digit i am following this method
	//and time complexity is o(n) if the data is not single digit then we can use quick or merge sort technique
	int count0=0, count1=0, count2=0, count3=0, count4=0, count5=0, count6, count7=0, count8=0, count9=0;
	struct node *traversal = head;
	while (traversal != NULL)//traversing the list and reading the input
	{
		if (traversal->num == 0)
			count0++;
		else if (traversal->num == 1)
			count1++;
		else if (traversal->num == 2)
			count2++;
		else if (traversal->num == 3)
			count3++;
		else if (traversal->num == 4)
			count4++;
		else if (traversal->num == 5)
			count5++;
		else if (traversal->num == 6)
			count6++;
		else if (traversal->num == 7)
			count7++;
		else if (traversal->num == 8)
			count8++;
		else
			count9++;
		traversal = traversal->next;
	}

	traversal = head;
	while (traversal != NULL)//sorting the list
	{
		if (count0>0)
		{
			traversal->num = 0;
			count0--;
		}
		else if (count1>0)
		{
			traversal->num = 1;
			count1--;
		}
		else if (count2>0)
		{
			traversal->num = 2;
			count2--;
		}
		else if (count3>0)
		{
			traversal->num = 3;
			count3--;
		}
		else if (count4>0)
		{
			traversal->num = 4;
			count4--;
		}
		else if (count5>0)
		{
			traversal->num = 5;
			count5--;
		}
		else if (count6>0)
		{
			traversal->num = 6;
			count6--;
		}
		else if (count7>0)
		{
			traversal->num = 7;
			count7--;
		}
		else if (count8>0)
		{
			traversal->num = 8;
			count8--;
		}
		else if (count9>0)
		{
			traversal->num = 9;
			count9--;
		}

		traversal = traversal->next;
	}
	return head;
}