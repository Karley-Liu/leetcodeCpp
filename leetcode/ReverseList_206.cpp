#include <iostream>
#include "ListNode.h"
#include <stack>

using namespace std;

ListNode* reverseList(ListNode* head) {
	ListNode* pre = head;
	stack <ListNode*> nodes;
	while (pre)
	{
		nodes.push(pre);
		pre = pre->next;
	}
	if (nodes.empty()) {
		return NULL;
	}
	ListNode* newListNode = nodes.top();
	nodes.pop();
	pre = newListNode;
	while (!nodes.empty())
	{
		pre->next = nodes.top();
		nodes.pop();
		pre = pre->next;
	}
	pre->next = NULL;
	return newListNode;
}

int main() {
	ListNode* head = new ListNode(1);
	ListNode* second = new ListNode(2);
	ListNode* third = new ListNode(3);
	head->next = second;
	head->next->next = third;
	reverseList(head);
}