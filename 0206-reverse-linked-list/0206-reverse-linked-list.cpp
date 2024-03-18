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
        ListNode* current=head;
        ListNode* previus=NULL;
        ListNode* temp;
        while(current!=NULL){
            temp=current->next;
            current->next=previus;
            previus=current;
            current=temp;
            
        }
        return previus;
        

        
    }
};