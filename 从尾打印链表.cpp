#include <iostream>
#include <vector>
#include <stack>

using namespace std;

  struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
  };

class Solution
{
public:
    vector<int> print(ListNode* head)
    {
        stack<int>  sta;
        vector<int>  res;
        if(head == nullptr)
            return res;
        while(head != nullptr)
        {
            int tmp = head->val;
            sta.push(tmp);
            head = head->next;
        }

        while(!sta.empty())
        {
            res.push_back(sta.top());
            sta.pop();
        }
      return res;
    }

};
