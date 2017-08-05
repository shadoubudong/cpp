#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    void replaceSpace(char *str, int length)
    {
        /**����ո����**/
        int num = 0;
        for(int i=0; i<length; i++)
        {
            if(str[i] == ' ')
                num++;
        }

        /**�滻����ܳ���**/
        int newlen = length + num*2;

        /**�Ӻ���ǰ�����滻**/
        int p1 = newlen - 1;
        int p2 = length - 1;
        while(p1 >= 0 && p2 >= 0)
        {
            if(str[p2] == ' ')
            {
                str[p1--] = '0';
                str[p1--] = '2';
                str[p1--] = '%';
            }
            else
                str[p1--] = str[p2];
            --p2;
        }
    }
};
