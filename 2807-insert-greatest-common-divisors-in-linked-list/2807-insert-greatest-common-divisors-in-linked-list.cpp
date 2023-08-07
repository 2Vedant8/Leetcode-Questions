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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) {
            //edge case, ya to empty ya only 1 node
            return head;
        }

        ListNode* current = head;
        while (current->next) {
            int num1 = current->val;
            int num2 = current->next->val;

            int gcd_val = std::__gcd(num1, num2); // Use __gcd from algorithm header

            //new node calculated greaqtest cd wali
            ListNode* new_node = new ListNode(gcd_val);

            //insert new node
            new_node->next = current->next;
            current->next = new_node;

            // Move to the next node pair
            current = current->next->next;
        }

        return head;
    }
};