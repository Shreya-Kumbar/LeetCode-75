// LeetCode 2095: Delete the Middle Node of a Linked List
// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* step = head -> next;

    if (head == NULL || head -> next == NULL)
        return NULL;

    while (step -> next != NULL && step -> next -> next != NULL){
        temp = temp -> next;
        step = step -> next -> next;
    }
    
    struct ListNode* new = temp -> next;
    temp -> next = new -> next;
    free(new);

    return head;
}