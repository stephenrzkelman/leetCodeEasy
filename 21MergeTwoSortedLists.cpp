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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
        {
            if(l2 == nullptr) return nullptr;
            else return l2;
        }
        else if(l2==nullptr) return l1;
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        ListNode* ans;
        if(cur1->val <= cur2->val)
        {
            ans = cur1;
            cur1 = cur1->next;
        }
        else
        {
            ans = cur2;
            cur2 = cur2->next;
        }
        ListNode* cur = ans;
        while(cur1 != nullptr && cur2!= nullptr)
        {
            if(cur1->val <= cur2->val)
            {
                cur->next = cur1;
                cur = cur->next;
                cur1 = cur1->next;
            }
            else
            {
                cur->next= cur2;
                cur = cur->next;
                cur2 = cur2->next;
            }
        }
        if(cur1 == nullptr)
        {
            cur->next = cur2;
        }
        else
        {
            cur->next = cur1;
        }
        return ans;
    }
};
