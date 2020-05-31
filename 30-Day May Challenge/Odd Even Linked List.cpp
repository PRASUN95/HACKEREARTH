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
    ListNode* oddEvenList(ListNode* head) {
        int pos = 2;
        ListNode* temp = head,*ans = head; 
        vector<int> odd;
        vector<int> even;
        while(head != NULL)
        {
            if(pos&1) // odd pos
            {
                even.push_back(head->val);
            }
            else odd.push_back(head->val);
            pos++;
            head = head->next;
        }
       for(int a : odd)
       {
           temp->val = a;
           temp = temp->next;
       }
         for(int a : even)
       {
           temp->val = a;
           temp = temp->next;
       }
        return ans;
    }
};