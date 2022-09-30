#include <iostream>
#include "ListNode.h"

using namespace std;

ListNode* deleteDuplicates(ListNode* head) {
	if (!head)
	{
		return NULL;
	}
	ListNode* slow = head, * fast = head;
	while(fast) {
		if (fast->val != slow->val) {
			slow->next = fast;
			slow = slow->next;
		}
		fast = fast->next;
	}
	slow->next = NULL;
	return head;
}