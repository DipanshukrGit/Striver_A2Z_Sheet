/*
Delete the Middle Node of the Linked List

Problem Statement: Given the head of a linked list of integers, delete the middle node of the linked list and return the modified head. However, if the linked list has an even number of nodes, delete the second middle node.

Examples
Input: 1->2->3->4->5 

Output: 1->2->4->5

Explanation: Node with value 3 is at the middle node and deleted.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* deleteMiddle(ListNode* head) {
    if (head == NULL || head->next == NULL)
        return NULL;

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow is middle
    prev->next = slow->next;
    return head;
}

};