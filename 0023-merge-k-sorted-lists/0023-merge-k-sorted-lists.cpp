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
    ListNode* sortTwoLists(ListNode* first, ListNode* second)

{

    if(first == NULL){

        return second;

    }

    if(second == NULL){

        return first;

    }

    

    ListNode*  ans = new ListNode(-1);

    ListNode*  temp = ans;

    

    while(first!=NULL && second!=NULL){

        if(first->val < second->val){

            temp->next = first;

            temp = first;

            first = first->next;

        }

        else{

            temp->next = second;

            temp = second;

            second = second->next;

        }

    }

    

    while(first != NULL){

        temp->next = first;

        temp = first;

        first = first->next;

    }

    while(second != NULL){

        temp->next = second;

        temp = second;

        second = second->next;

    }

    return ans->next;

}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        if(lists[0]==NULL and lists.size()==1){
            return NULL;
        }
        if(lists.size()==1){
            return lists[0];
        }
        ListNode* head=sortTwoLists(lists[0],lists[1]);
        cout<<"hi";
        for(int i=2;i<lists.size();i++){
            head=sortTwoLists(head,lists[i]);
        }
        return head;
    }
};