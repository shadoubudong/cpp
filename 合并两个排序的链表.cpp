#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution
{
public:
    ListNode* fun(ListNode* h1, ListNode* h2)
    {
        if(ha == nullptr)
            return h2;
        if(h2 == nullptr)
            return h1;

        ListNode* newhead = new ListNode(-1);
        ListNode* cur = newhead;
        while(h1 && h2)
        {
            if(h1->val <= h2->val)
            {
                cur->next = h1;
                h1 = h1->next;
            }
            else
            {
                cur->next = h2;
                h2 = h2->next;
            }
            cur = cur->next;
        }

        cur->next = h1 != nullptr ? h1 : h2;
        return newhead->next;
    }
};
