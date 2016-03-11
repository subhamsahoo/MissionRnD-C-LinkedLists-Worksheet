/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int count0 = 0, count1 = 0, count2 = 0;
	struct node *traversal = head;
	while (traversal != NULL)
	{
		if (traversal->data == 0)
			count0++;
		else if (traversal->data == 1)
			count1++;
		else
			count2++;
		traversal = traversal->next;
	}
	//if all the data is 0
	if (count0>0 && count1 == 0 && count2 == 0)
	{

	}
	else//all the other cases
	{
		traversal = head;
		while (traversal != NULL)
		{
			if (count0>0)
			{
				traversal->data = 0;
				count0--;
			}
			else if (count1>0)
			{
				traversal->data= 1;
				count1--;
			}
			else if (count2>0)
			{
				traversal->data= 2;
				count2--;
			}

			traversal = traversal->next;
		}
	}
	
}