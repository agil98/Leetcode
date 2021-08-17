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
        ListNode ** curr = &head; // pointer to the entry pointer
                                  // pointer has the address to head
        while(*curr != nullptr){
            if ((*curr)->val == val) 
                (*curr) = (*curr)->next; // make current list pointer be 
                                         // be the next list pointer
            else
                curr = &(*curr)->next;   // let curr point to the address of
                                         // the next list pointer
        }
        return head;
    }
};