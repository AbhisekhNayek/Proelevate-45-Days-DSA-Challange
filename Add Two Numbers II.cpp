class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)   
 {
        std::stack<ListNode*> stack1, stack2;

        while (l1) {
            stack1.push(l1);
            l1 = l1->next;
        }

        while (l2) {
            stack2.push(l2);
            l2 = l2->next;   

        }

        ListNode* head = nullptr;
        int carry = 0;

        while (!stack1.empty() || !stack2.empty() || carry) {
            int sum = carry;
            if (!stack1.empty()) {
                sum += stack1.top()->val;
                stack1.pop();
            }
            if (!stack2.empty()) {
                sum += stack2.top()->val;
                stack2.pop();
            }
            carry = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            node->next = head;
            head = node;
        }

        return head;
    }
};
