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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        if(n==cnt)
        {
            ListNode* deltemp=head;
            head=head->next;
            delete deltemp;
            return head;
        }
        int ncnt=cnt-n-1;
        
        temp=head;
        for(int i=0;i<ncnt;i++)
        {
            temp=temp->next;
        }
        ListNode* deltemp=temp->next;
        temp->next=temp->next->next;
        delete deltemp;
        return head;

    }
};