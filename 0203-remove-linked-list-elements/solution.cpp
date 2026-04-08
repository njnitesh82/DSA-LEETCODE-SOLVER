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
    ListNode* removeElements(ListNode* head, int val) {
        
        //control & base case
        if(head == NULL){
            return nullptr;
        }
        
        
        head->next = removeElements(head->next, val);

        // now decide for current node
        if (head->val == val) {
            return head->next;  // skip current node
        } else {
            return head;        // keep current node
        }
    }
};
