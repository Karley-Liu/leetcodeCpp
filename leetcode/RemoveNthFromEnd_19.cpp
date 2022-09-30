#include <iostream>
#include "ListNode.h"

using namespace std;

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* pre = new ListNode;
	pre = head;
	int last = length(head)-n;
	if (last == 0)
	{
		return head->next;
	}
	while (head)
	{
		if (last > 1) {
			pre = pre->next;
			last--;
		}
		else
		{
			pre->next = pre->next->next;
			break;
		}
	}
	return head;

}

int length(ListNode* head) {
	int len = 0;
	while (head)
	{
		len++;
		head = head->next;
	}
	return len;
}