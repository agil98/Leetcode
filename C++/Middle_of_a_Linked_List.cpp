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

 /* First attempt */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode ** curr = &head;
        int len = 0;
        int pos = 0;
        
        while (*curr != nullptr){
            len++;
            curr = &(*curr)->next;
        }
        
        curr = &head;
        while (curr != nullptr){
            if (pos == (len/2))
                break;
            pos ++;
            curr = &(*curr)->next;
        }
        return *curr;
    }
};

/* Second attempt */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * curr = head;
        ListNode * mid = head;
        
        while (curr != NULL && curr->next != NULL){
            mid = mid->next;
            curr = curr->next->next;
        }
        return mid;
    }
};