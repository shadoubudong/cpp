#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool Find(int target, vector<vector<int>> array);
};

Solution::Find(int target, vector<vector<int>> array)
{
    int rows = array.size();
    int cloums = array[0].size();
    bool res = false;
    if(rows > 0 && cloums > 0)
    {
        int row = 0;
        int cloum = cloums - 1; //从最后一列开始
        while(row <rows && cloums >= 0)
        {
            if(array[row][cloum] == target)
            {
                res = true;
                break;
            }
            else if(array[row][cloum] > target)
                --cloum;
            else
                ++row;
        }
    }
    return res;
}

