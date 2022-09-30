#include <iostream>
#include "ListNode.h"
using namespace std;

ListNode* middleNode(ListNode* head) {
    int len = length(head);
    len = len / 2;
    ListNode* pre = head;
    while (len != 0) {
        pre = pre->next;
        len--;
    }
    return pre;
}

int length(ListNode* head) {
    int len = 0;
    ListNode* pre = head;
    while (pre != NULL) {
        len++;
        pre = pre->next;
    }
    return len;
}