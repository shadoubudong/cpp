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
    ListNode* fun(ListNode* head)
    {
        ListNode* newhead = nullptr;
        ListNode* pre = nullptr;
        ListNode* move = head;
        while(move)
        {
            ListNode* next = move->next;
            if(next == nullptr) /**处理最后一个节点，设为新的头结点**/
                newhead = next;
            move->next = pre;
            pre = move;
            move = next;
        }
        return newhead;
    }
};
