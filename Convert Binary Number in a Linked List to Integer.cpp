class Solution {
public:
    int getDecimalValue(ListNode* head) {
        // First, find the length of the linked list
        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
        
        // Now, convert the binary number to decimal
        int sum = 0;
        int power = length - 1;
        ListNode* slow = head;
        while (slow != nullptr) {
            sum += slow->val * pow(2, power);
            slow = slow->next;
            power--;
        }
        
        return sum;
    }
};
