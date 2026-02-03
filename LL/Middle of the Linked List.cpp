/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.


Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

*/


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Step 1: Count the number of nodes
        int size = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        // Step 2: Find the middle index (0-based)
        int middleIndex = size / 2;

        // Step 3: Traverse again to the middle node
        temp = head;
        for (int i = 0; i < middleIndex; ++i) {
            temp = temp->next;
        }

        return temp;
    }
};


//solution 2 

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;        // 1 step
        fast = fast->next->next; // 2 steps
    }

    return slow; // middle node
}
