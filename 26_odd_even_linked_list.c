// LeetCode 328: Odd Even Linked List
// https://leetcode.com/problems/odd-even-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    
    if (head == NULL || head -> next == NULL){
        return head;
    }

    struct ListNode *evenHead = head -> next;
    struct ListNode *odd = head;
    struct ListNode *even = evenHead;

    while (odd -> next != NULL && even -> next != NULL){
        odd -> next = even -> next;
        odd = even -> next;
        even -> next = odd -> next;
        even = odd -> next;
    }

    odd -> next = evenHead;

    return head;
}