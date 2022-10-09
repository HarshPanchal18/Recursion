#include <iostream>
using namespace std;

/*
* Reverse Linked List
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Input: head = [1,2]
Output: [2,1]

Input: head = []
Output: []
*/
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head, ListNode *prev = NULL)
{

    if (head == NULL)
        return head;

    if (!head->next)
    {
        head->next = prev;
        return head;
    }

    ListNode *temp = head->next;
    head->next = prev;

    return reverseList(temp, head);
}
