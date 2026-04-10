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
    ListNode* reverseList(ListNode* head) {
        // make a previous node
        ListNode* prev = nullptr;

        if (head == nullptr || head->next == nullptr){
            return head;
        }
        
        //current node is head
        ListNode* newNode = reverseList(head->next);
        //____________________________________________
        ListNode* headNext = head->next;
        headNext->next = head;
        head->next = nullptr;

        
    return newNode;      
    }
};
