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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL
        || head->next == NULL) return head;

        ListNode* curr = head;
        ListNode* prev = NULL;

        //new head
        head = head->next;

        while(curr != NULL && curr->next != NULL){
            ListNode* nextPair = curr->next->next;

            ListNode* first = curr;
            ListNode* second = first->next;
            
            //swap
            first->next = nextPair;
            second->next = first;   

            //attach with prev node
            if (prev != NULL){
                prev->next = second;
            }
            prev = first;

            // increment to next pair
            curr = nextPair;
        }
    return head;
    }
};
