class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node that points to the head
        ListNode* dummy = new ListNode(0, head);
        ListNode* current = dummy;

        while (current->next != nullptr) {
            if (current->next->val == val) {
                // Remove the node with the matching value
                ListNode* nodeToDelete = current->next;
                current->next = current->next->next;
                delete nodeToDelete; // Free the memory
            } else {
                // Move to the next node
                current = current->next;
            }
        }
        
        // Store the new head to return
        ListNode* newHead = dummy->next;
        delete dummy; // Free the memory of the dummy node
        return newHead;
    }
};
