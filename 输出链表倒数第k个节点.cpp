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
    ListNode* fun(ListNode* head, unsigned int k)
    {
        ListNode *p1 = head;
        ListNode *p2 = head;
        while(k && p2)
        {
            p2 = p2->next;
        }
        if(k > 0) /**链表没有k个节点*/
            return NULL;
        while(p2)
        {
            p2 = p2->next;
            p1 = p1->next;
        }
        return p1;
    }
};
