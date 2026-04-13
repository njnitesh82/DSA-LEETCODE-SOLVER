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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return recursiveAdd(l1, l2, 0);
    }

    ListNode* recursiveAdd(ListNode* l1, ListNode* l2, int carry) {
        // init the node to store value
        // ListNode* resutNode = nullptr;
        ListNode* sum = new ListNode(carry);

        if(l1 == NULL && l2 == NULL && carry <=0) return NULL;
        if(l1) sum->val += l1->val;
        if(l2) sum->val += l2->val;

        sum->next = recursiveAdd(
            l1 ? l1->next : NULL,
            l2 ? l2->next : NULL,
            sum->val / 10);

        sum->val = sum->val % 10;
    return sum;
    }
};
