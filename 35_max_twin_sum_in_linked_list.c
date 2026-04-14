// LeetCode 2130: Maximum Twin Sum of a Linked List
// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *reverse(struct ListNode *head){

    struct ListNode *curr = head;
    struct ListNode *prev = NULL;
    struct ListNode *next = NULL;

    while (curr != NULL){
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}

int pairSum(struct ListNode* head) {
    
    if (head == NULL || head -> next == NULL)
        return 0;

    struct ListNode *temp1 = head;
    struct ListNode *temp2 = head;

    while (temp1 != NULL && temp1 -> next != NULL){
        temp2 = temp2 -> next;
        temp1 = temp1 -> next -> next;
    }

    temp2 = reverse(temp2);
    temp1 = head;

    int maxTwinSum = 0;
    while (temp2 != NULL){
        int sum = temp1 -> val + temp2 -> val;
        if (sum > maxTwinSum){
            maxTwinSum = sum;
        }

        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }

    return maxTwinSum;
}