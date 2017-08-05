#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    bool isNumeric(char* string)
    {
        bool sign = false;//标记符号是否出现过
        bool decimal = false; //标记小数点是否出现过
        bool hasE = false; //标记e是否出现过
        for(int i=0;i<strlen(string);i++)
        {
            if(string[i] = 'e' || string[i] == 'E')
            {
                if(i == strlen(string)-1)//e后面没数字了，错误
                    return false;
                if(hasE)
                    return false; //已经存在E，返回错
                hasE = true;
            }
            else if(string[i] == '+' || string[i] == '-')//如果当前字符为符号
            {
                if(sign&&string[i-1] != 'e' && string[i-1] != 'E')//第二次出现符号，且该符号不是紧跟e后面，则返回false
                    return false;
                if(!sign && i>0 && string[i-1] != 'e' && string[i-1] != 'E')//第一次出现符号，且符号不在第一个字符，若符号不是紧跟e，返回false
                    return false;
                sign = true;
            }
            else if(string[i] == '.') //当前字符是小数点
            {
                if(hasE || decimal)//e之后不能出现小数点，小数点不能出现两次
                    return false;
                decimal = true;
            }
            else if(string[i] < '0' || string[i] > '9')//当前字不合法
                return false;
        }
        return true;
    }
};

int main()
{
    Solution ss = new Solution;
    char* ss = "100";
    bool res = ss.isNumeric(ss);
    if(bool)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
