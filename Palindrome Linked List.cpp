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
    bool isPalindrome(ListNode* head) {
        ListNode *fast = NULL;
        ListNode *slow = fast = head;

        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        // Reverse the second half of the linked list
        ListNode *prev = NULL;
        ListNode *curr = slow;
        while (curr)
        {
            ListNode *next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        // Compare the first half and reversed second half of the list
        ListNode *first = head;
        ListNode *second = prev;
        while (second)
        {
            if (first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};
