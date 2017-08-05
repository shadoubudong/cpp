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
            if(next == nullptr) /**�������һ���ڵ㣬��Ϊ�µ�ͷ���**/
                newhead = next;
            move->next = pre;
            pre = move;
            move = next;
        }
        return newhead;
    }
};
