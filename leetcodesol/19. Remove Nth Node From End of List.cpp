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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        //if(head->next==nullptr && n==1) return nullptr;
        ListNode *leadNode=head;
        for(int i=0;i<n;++i) leadNode=leadNode->next;
        if(leadNode==nullptr) head=head->next;
        else
        {
            ListNode *toDelete=head;
            while(leadNode->next!=nullptr)
            {
                toDelete=toDelete->next;
                leadNode=leadNode->next;
            }
            toDelete->next=toDelete->next->next;
        }
        return head;   
    }