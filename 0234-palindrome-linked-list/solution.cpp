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
        ListNode* tempHead = head;

        if (head == nullptr || head->next == nullptr){
            return true;
        }

        return recurcive_check(head, tempHead); 
    }

    bool recurcive_check(ListNode* head, ListNode*& tempHead){
        if (head == nullptr){
            return true;
        }

        bool pre_status = recurcive_check(head->next, tempHead);

        if (!pre_status) return false;

        if (head->val != tempHead->val){
            return false;
        }

        tempHead = tempHead->next;

        return true;
    }
};
