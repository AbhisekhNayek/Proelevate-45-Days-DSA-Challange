class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Initialize the dummy node
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;

        // Traverse both lists
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        // Attach the remaining elements, if any
        if (list1 != nullptr) {
            curr->next = list1;
        } else {
            curr->next = list2;
        }

        // Return the merged list, starting from the node after dummy
        ListNode *mergedHead = dummy->next;
        delete dummy; // Free the memory of the dummy node
        return mergedHead;
    }
};
