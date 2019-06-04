/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL, *tmp = NULL;
        int carr = 0;
        while(l1!=NULL || l2!=NULL)
        {
            int lv = 0;
            int rv = 0;
            if(l1!=NULL)
            {
                lv = l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                rv = l2->val;
                l2 = l2->next;
            }
            
            int cv = (lv+rv+carr)%10;
            carr = (lv+rv+carr)/10;
            
            ListNode *node = new ListNode(cv);
            if(head==NULL)
            {
                head = node;
                tmp = head;
            }
            else
            {
                tmp->next = node;
                tmp=tmp->next;
            }
            
        }
        if(carr!=0)
        {
            ListNode *node = new ListNode(carr);
            tmp->next = node;
            tmp = tmp->next;
        }
        tmp->next = NULL;
        return head;
        

    }
};
