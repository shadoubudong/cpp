#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    bool isNumeric(char* string)
    {
        bool sign = false;//��Ƿ����Ƿ���ֹ�
        bool decimal = false; //���С�����Ƿ���ֹ�
        bool hasE = false; //���e�Ƿ���ֹ�
        for(int i=0;i<strlen(string);i++)
        {
            if(string[i] = 'e' || string[i] == 'E')
            {
                if(i == strlen(string)-1)//e����û�����ˣ�����
                    return false;
                if(hasE)
                    return false; //�Ѿ�����E�����ش�
                hasE = true;
            }
            else if(string[i] == '+' || string[i] == '-')//�����ǰ�ַ�Ϊ����
            {
                if(sign&&string[i-1] != 'e' && string[i-1] != 'E')//�ڶ��γ��ַ��ţ��Ҹ÷��Ų��ǽ���e���棬�򷵻�false
                    return false;
                if(!sign && i>0 && string[i-1] != 'e' && string[i-1] != 'E')//��һ�γ��ַ��ţ��ҷ��Ų��ڵ�һ���ַ��������Ų��ǽ���e������false
                    return false;
                sign = true;
            }
            else if(string[i] == '.') //��ǰ�ַ���С����
            {
                if(hasE || decimal)//e֮���ܳ���С���㣬С���㲻�ܳ�������
                    return false;
                decimal = true;
            }
            else if(string[i] < '0' || string[i] > '9')//��ǰ�ֲ��Ϸ�
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
